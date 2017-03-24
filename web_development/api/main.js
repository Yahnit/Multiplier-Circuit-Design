var glob;
var allStudents=[];
var allCourses=[],flag;
var c,d;

var makeStudent = function(r, nm, yr){
	var student = {};

	var roll;
	var name;
	var year;
	var courses = [];

	for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getRoll()==r)
		{
			//		alert("Roll Number already exists in the Directory");
			console.log("Roll Number already exists in the Directory");
			flag=2;
			return;
		}
	}

	if(r>=20110000 && r<=20169999)
		roll = r;
	else{

		//	alert("INVALID ROLL NUMBER");
		console.log("INVALID ROLL NUMBER");
		flag=2;
		return;
	}
	if(/^[a-z]*$/i.test(nm))
		name = nm;
	else
	{
		//alert("INVALID NAME");
		console.log("INVALID NAME");
		flag=2;
		return;
	}

	if(yr[0]=='U' && yr[1]=='G' && yr[2]>0 && yr[2]<7)
		year = yr;
	else
	{
		//	alert("INVALID YEAR");
		console.log("INVALID YEAR");
		flag=2;
		return;
	}
	student.courses = courses;
	var getName = function()
	{
		return name;
	}
	student.getName = getName;
	var getRoll = function()
	{
		return roll;
	}

	student.getRoll = getRoll;
	var getYear = function()
	{
		return year;
	}
	student.getYear = getYear;

	var getCourseIds = function()
	{
		return student.courses;
	}
	var addCourse = function(id)
	{

		if((id.length==6) && (/^[A-Z]*$/.test(id.substr(0,1))) && (/^[A-Z]*$/.test(id.substr(1,1))) && (/^[A-Z]*$/.test(id.substr(2,1))) && (999>=(Number(id.substr(3,3))) && (Number(id.substr(3,3)))>=0))
			student.courses.push(id);
		else
		{

			console.log("Invalid ID");
			return;

		}
	}
	var dropCourse = function(id)
	{
		for(i=0;i<student.courses.length;i++)
		{
			if(student.courses[i]==id)
			{
				student.courses.splice(i,1);
				break;
			}
		}

	}
	var findCourse = function(id)
	{
		for(i=0; i<student.courses.length;i++)
		{
			if(student.courses[i]==id)
				return true;
		}
		return false;
	}
	student.addCourse = addCourse;
	student.getCourseIds = getCourseIds;
	student.dropCourse = dropCourse;
	student.findCourse = findCourse;

	allStudents.push(student);
	return student;
}

var makeCourse = function(i, nm)
{
	var course = {}
	var id;
	var name;
	var students = [];

	for(j=0;j<allCourses.length;j++)
	{
		if(allCourses[j].getCId()==i)
		{
			//		alert("The Course " + allCourses[j].getCId()+ " already exists in the directory!");

			console.log("The Course " + allCourses[j].getCName()+ " already exists in the directory!");
			flag=2;
			return;
		}
	}

	if((i.length==6) && (/^[A-Z]*$/.test(i.substr(0,1))) && (/^[A-Z]*$/.test(i.substr(1,1))) && (/^[A-Z]*$/.test(i.substr(2,1))) && (999>=(Number(i.substr(3,3))) && (Number(i.substr(3,3)))>=0))
		id=i;
	else
	{
		// alert("INVALID ID");
		console.log("INVALID ID");
		flag=2;
		return;
	}

	if(/^[a-z]*$/i.test(nm))
		name = nm;
	else
	{
		console.log("INVALID NAME");
		flag=2;
		return;
	}

	var getCId = function()
	{
		return id;
	}
	course.getCId = getCId;
	var getCName = function()
	{
		return name;
	}
	course.getCName = getCName;

	var getStudents = function()
	{
		return course.students; 
	}

	var addStudent = function(roll)
	{
		if(roll>=20110000 && roll<=20169999)
			course.students.push(roll);
		else
		{

			console.log("Invalid roll number");
			return;
		}
	}

	var dropStudent = function(roll)
	{

		for(i=0;i<course.students.length;i++)
		{
			if(course.students[i]==roll)
			{
				course.students.splice(i,1);
				break;
			}
		}

	}


	var findStudent = function(roll)
	{
		for(i=0;i<course.students.length;i++)
		{
			if(course.students[i]==roll)
				return true;
		}
		return false;
	}


	course.students=students;
	course.getStudents=getStudents;
	course.addStudent=addStudent;
	course.dropStudent=dropStudent;
	course.findStudent=findStudent;

	allCourses.push(course);
	return course;
}

var addNewStudent = function(roll,name,year)
{

	flag=0;
	makeStudent(roll,name,year);
	if(flag!=2)
	{
		//	alert("STUDENT SUCCESFULLY ADDED!!");
		console.log("STUDENT SUCCESSFULLY ADDED!!");
	}

	$.ajax({
url : 'http://127.0.0.1:5000/addStudent',
method: "POST",
data: {
roll:roll,
name:name,
year:year,
},
async:false,
success: function(response){
alert(response);
resp = response;
},
error: function(response) { 
resp = response;
 alert(resp.responseText); 
}     
});
populateStudents();
return resp;
}

var populateStudents = function()
{
	 c=viewAllStudents();
	var input="";
	for(j=0;j < c.length;j++)
	{
		input+='<tr>'
			input+='<td align="center">'+c[j].roll+'</td>';
		input+='<td align="center">'+c[j].name+'</td>';
		input+='<td align="center">'+c[j].year+'</td>';
		input+='</tr>';
	}
	$('#studentscontent').html(input);

	var res="";
	for(i=0;i<c.length;i++)
	{ 
		res+='<option>' + c[i].name + '</option>';
	}
	$('#add_student').html(res);
	$('#remove_student').html(res);
	$('#delete_student').html(res);
	$('#display_courses').html(res);
}

var addStudent = function()
{
	//	var x = $('#addNewStudent');
	var x = document.getElementById('addNewStudent');

	var roll = x.elements[0].value;
	var name = x.elements[1].value;
	var year = x.elements[2].value;
	addNewStudent(roll,name,year);
	x.elements[0].value = "";
	x.elements[1].value = "";
	x.elements[2].value = "";
}


var addNewCourse = function(id,name)
{

	flag=0;
	makeCourse(id,name);
	if(flag!=2)
	{
		console.log("COURSE SUCCESSFULLY ADDED!!");
		//alert("COURSE SUCCESFULLY ADDED");
	}

	$.ajax({
url : 'http://127.0.0.1:5000/addCourse',
method: "POST",
data: {
id:id,
name:name,
},
async:false,

success: function(response){
alert(response);
resp = response;
},
error: function(response) { 
resp = response;
 alert(resp.responseText); 
}     
});

populateCourses();
return resp;
}


var studentArray;
var viewAllStudents = function()
{
	$.ajax({
url : 'http://127.0.0.1:5000/students',
method: "GET",
data: {},
async: false,
success: function(response){
studentArray =  response.students; 
},
error: function(response) { 
 studentArray = response;
 alert(studentArray.responseText); 
},     
});
return studentArray;

}


var courseArray;
var viewAllCourses = function()
{

	$.ajax({
url : 'http://127.0.0.1:5000/courses',
method: "GET",
data: {},
async:false,
success: function(response){
courseArray=response.courses; 
},
error: function(response) { 
courseArray = response;
 alert(courseArray.responseText); 
}     
});
return courseArray;
}

var populateCourses = function()
{
	 d = viewAllCourses();
	var res="";
	for(i=0;i<d.length;i++)
	{
		res+='<option>' + d[i].name + '</option>';
	}
	$('#add_course').html(res);
	$('#remove_course').html(res);
	$('#delete_course').html(res);
	$('#display_students').html(res);

	var input="";
	for(i=0;i<d.length;i++)
	{
		input+='<tr>';
		input+='<td align="center">'+d[i].id+'</td>';
		input+='<td align="center">'+d[i].name+'</td>';
		input+='</tr>';
	}
	$('#coursecontent').html(input);


}

populateCourses();
populateStudents();

var addCourse = function()
{
	var x = document.getElementById('addNewCourse');
	//	var x = $('#addNewCourse');
	var id = x.elements[0].value;
	var name = x.elements[1].value;

	x.elements[0].value="";
	x.elements[1].value="";
	addNewCourse(id,name);
}


var temp1 = function()
{
	//var p = $('#add_student');
	var p = document.getElementById('add_student');
	var x1 = p.options[p.selectedIndex].value;
	var q = document.getElementById('add_course');
	//	var q = $('#add_course');
	var y1 = q.options[q.selectedIndex].value;
	for(i=0;i<c.length;i++)
	{
		if(c[i].name==x1)
		{	var stud = c[i].roll;
			break;
		}
	}
	for(i=0;i<d.length;i++)
	{
		if(d[i].name==y1)
		{
			var cour = d[i].id;
			break;
		}
	}
	addStudentToCourse(stud,cour);
}
var addStudentToCourse = function (s,c)
{
	$.ajax({
url : 'http://127.0.0.1:5000/enroll',
method: "POST",
data: {
id:c,
roll:s,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) {
resp = response;
alert(resp.responseText); ; 
}     
});
return resp;
}
var temp2 = function()
{

	var p = document.getElementById("remove_student");
	var x1 = p.options[p.selectedIndex].value;
	var q = document.getElementById("remove_course");
	var y1 = q.options[q.selectedIndex].value;
	for(i=0;i<c.length;i++)
	{
		if(c[i].name==x1)
		{
			var stud = c[i].roll;
			break;
		}
	}
	for(i=0;i<d.length;i++)
	{
		if(d[i].name==y1)
		{
			var cour = d[i].id;
			break;
		}
	}
	dropStudentFromCourse(stud,cour);
}
var dropStudentFromCourse = function (s,c)
{
	$.ajax({
url : 'http://127.0.0.1:5000/drop',
method: "POST",
data: {
id:c,
roll:s,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) { 
resp = response;
alert(resp.responseText); 
}     
});
return resp;

}

var temp3 = function()
{
	var p = document.getElementById('delete_course');
	var x1 = p.options[p.selectedIndex].value;
	for(i=0;i<d.length;i++)
	{
		if(d[i].name==x1)
		{
			removeCourse(d[i].id);
			break;
		}
	}
}


var removeCourse = function(id)
{

	$.ajax({
url : 'http://127.0.0.1:5000/dropCourse',
method: "POST",
data: {
id:id,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) {
resp = response;
alert(resp.responseText);} 
});

	$.ajax({
url : 'http://127.0.0.1:5000/deleteCourse',
method: "POST",
data: {
id:id,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) {
resp = response;
alert(resp.responseText);} 
});

populateCourses();
return resp;
}

var temp4 = function()
{
	var p = document.getElementById('delete_student');
	var x1 = p.options[p.selectedIndex].value;

	for(i=0;i<c.length;i++)
	{
		if(c[i].name==x1)
		{
			removeStudent(c[i].roll);
			break;
		}
	}
}

var removeStudent = function(roll)
{
	
	$.ajax({
url : 'http://127.0.0.1:5000/dropStudent',
method: "POST",
data: {
roll:roll,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) {
resp = response;
alert(resp.responseText); 
}     
	
});
	$.ajax({
url : 'http://127.0.0.1:5000/deleteStudent',
method: "POST",
data: {
roll:roll,
},
async:false,
success: function(response){
resp = response;
alert(response);
},
error: function(response) { 
resp = response;
alert(resp.responseText);
}     
});

populateStudents();
return resp;
}

var temp5 = function()
{
	var p = document.getElementById("display_students");
	var x1 = p.options[p.selectedIndex].value;
	var hel=[];
	for(i=0;i<d.length;i++)
	{
		if(d[i].name==x1)
		{
			viewEnrolled(d[i].id);

            break;
         }
     }
//display_students(hel);
}

var viewEnrolled = function(id)
{

	$.ajax({
url : 'http://127.0.0.1:5000/studentsEnrolled',
method: "GET",
data: {
id:id,
},
async:false,
success: function(response){
glob=response;
// alert(response);
},
error: function(response) {
glob = response;
alert(glob.responseText);

}     
});

display_students(glob.students);
return glob;
}     



var display_students = function(array)
{

	var input="";
	for(j=0;j<array.length;j++)
	{
		input+='<tr>';
		input+='<td align="center">'+array[j].roll +'</td>';
		input+='<td align="center">'+array[j].name +'</td>';
		input+='<td align="center">'+array[j].year +'</td>';
		input+='</tr>';
	}

	$('#disp_students').html(input);	   
}
var glob;

var temp6 = function()
{

	var p = document.getElementById("display_courses");
	var x1 = p.options[p.selectedIndex].value;
	for(i=0;i<c.length;i++)
	{
		if(c[i].name==x1)
		{
			viewCoursesTaken(c[i].roll);	
			return;
		}
	}
//	display_courses([]);
}

var glob;
var viewCoursesTaken = function(roll)
{

	$.ajax({
url : 'http://127.0.0.1:5000/coursesTaken',
method: "GET",
async:false,
data: {
roll:roll,
},

success: function(response){
glob=response;
//alert(response);
},
error: function(response) { 
glob = response;
alert(glob.responseText);
}     
});
display_courses(glob.courses);
return glob;
}


var display_courses = function(array)
{
	var input="";
	for(j=0;j<array.length;j++)
	{
		input+='<tr>';
		input+='<td align="center">'+array[j].id +'</td>';
		input+='<td align="center">'+array[j].name +'</td>';
		input+='</tr>';
	}
	$('#disp_courses').html(input);

}



   module.exports.makeStudent = makeStudent;
   module.exports.makeCourse = makeCourse;
   module.exports.addNewStudent = addNewStudent;
   module.exports.addStudent = addStudent;
   module.exports.populateStudents = populateStudents;
   module.exports.populateCourses = populateCourses;
   module.exports.addNewCourse = addNewCourse;
   module.exports.addCourse = addCourse;
   module.exports.viewAllStudents = viewAllStudents;
   module.exports.viewAllCourses = viewAllCourses;
   module.exports.addStudentToCourse = addStudentToCourse;
   module.exports.dropStudentFromCourse = dropStudentFromCourse;
   module.exports.removeCourse = removeCourse;
   module.exports.removeStudent = removeStudent;
   module.exports.viewEnrolled = viewEnrolled;
   module.exports.viewCoursesTaken = viewCoursesTaken;
   module.exports.temp1 = temp1;
   module.exports.temp2 = temp2;
   module.exports.temp3 = temp3;
   module.exports.temp4 = temp4;
   module.exports.temp5 = temp5;
   module.exports.temp6 = temp6;
   module.exports.display_students = display_students;
   module.exports.display_courses = display_courses;

