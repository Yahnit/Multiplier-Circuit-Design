
var allStudents=[];
var allCourses=[],flag;
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



var addNewStudent = function()
{
//	var x = $('#addNewStudent');
	var x = document.getElementById('addNewStudent');
	flag=0;
	makeStudent(x.elements[0].value,x.elements[1].value,x.elements[2].value);
	if(flag!=2)
	{
	//	alert("STUDENT SUCCESFULLY ADDED!!");
		console.log("STUDENT SUCCESSFULLY ADDED!!");
	}
	x.elements[0].value = "";
	x.elements[1].value = "";
	x.elements[2].value = "";
	viewStudents();
	var res="";
	for(i=0;i<allStudents.length;i++)
	{ 
		res+='<option>' + allStudents[i].getName() + '</option>';
	}
	$('#add_student').html(res);
	$('#remove_student').html(res);
	$('#delete_student').html(res);
	$('#display_courses').html(res);

}
var viewStudents = function()
{
	var input="";
	for(j=0;j<allStudents.length;j++)
	{
		input+='<tr>'
		input+='<td align="center">'+allStudents[j].getRoll()+'</td>';
		input+='<td align="center">'+allStudents[j].getName()+'</td>';
		input+='<td align="center">'+allStudents[j].getYear()+'</td>';
		input+='</tr>';
	}
	$('#studentscontent').html(input);
}

var addNewCourse = function()
{
	var x = document.getElementById('addNewCourse');
//	var x = $('#addNewCourse');
	flag=0;
	makeCourse(x.elements[0].value,x.elements[1].value);
	if(flag!=2)
	{
		console.log("COURSE SUCCESSFULLY ADDED!!");
		//alert("COURSE SUCCESFULLY ADDED");
	}
    x.elements[0].value="";
    x.elements[1].value="";
	viewCourses();
	var res="";
	for(i=0;i<allCourses.length;i++)
	{
		res+='<option>' + allCourses[i].getCName() + '</option>';
	}
    $('#add_course').html(res);
	$('#remove_course').html(res);
	$('#delete_course').html(res);
	$('#display_students').html(res);
}

var viewCourses = function()
{
	var input="";
	for(i=0;i<allCourses.length;i++)
	{
		input+='<tr>';
		input+='<td align="center">'+allCourses[i].getCId()+'</td>';
		input+='<td align="center">'+allCourses[i].getCName()+'</td>';
		input+='</tr>';
	}
	$('#coursecontent').html(input);
}

var viewAllCourses = function()
{
	return allCourses;
}

var viewAllStudents = function()
{
	return allStudents;
}

var temp1 = function()
{
//var p = $('#add_student');
var p = document.getElementById('add_student');
	var x1 = p.options[p.selectedIndex].value;
	var q = document.getElementById('add_course');
//	var q = $('#add_course');
	var y1 = q.options[q.selectedIndex].value;
	for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getName()==x1)
		{	var stud = allStudents[i];
			break;
		}
	}
	for(i=0;i<allCourses.length;i++)
	{
		if(allCourses[i].getCName()==y1)
		{
			var cour = allCourses[i];
			break;
		}
	}
	AddStudentToCourse(stud,cour);
}
var AddStudentToCourse = function (s,c)
{
	if(c.findStudent(s.getRoll()))
	{
	//	alert(s.getName() + " is already added to the course " + c.getCName());

		console.log(s.getName() + " is already added to the course " + c.getCName());
		return;
	}
    for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getRoll()==s.getRoll())
		{
			break;
		}
	}

    for(j=0;j<allCourses.length;j++)
	{
		if(allCourses[j].getCId()==c.getCId())
		{
			break;
		}
	}

	allStudents[i].addCourse(c.getCId());
	allCourses[j].addStudent(s.getRoll());
//	alert(s.getName() + " is added to the course " + c.getCName() );	
	console.log(s.getName() + " is added to the course " + c.getCName() );	
}
var temp2 = function()
{

	var p = document.getElementById("remove_student");
	var x1 = p.options[p.selectedIndex].value;
	var q = document.getElementById("remove_course");
	var y1 = q.options[q.selectedIndex].value;
	for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getName()==x1)
		{
			var stud = allStudents[i];
			break;
		}
	}
	for(i=0;i<allCourses.length;i++)
	{
		if(allCourses[i].getCName()==y1)
		{
			var cour = allCourses[i];
			break;
		}
	}
	DropStudentFromCourse(stud,cour);
}
var DropStudentFromCourse = function (s,c)
{

	if(!(c.findStudent(s.getRoll())))
	{
	//	alert(s.getName() + " has not taken the course " + c.getCName());
		console.log(s.getName() + " has not taken the course " + c.getCName());
		return;
	}

    for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getRoll()==s.getRoll())
		{
			break;
		}
	}

    for(j=0;j<allCourses.length;j++)
	{
		if(allCourses[j].getCId()==c.getCId())
		{
			break;
		}
	}
	allStudents[i].dropCourse(c.getCId());
	allCourses[j].dropStudent(s.getRoll());
//	alert(s.getName() + " is removed from the course " + c.getCName() );	
	console.log(s.getName() + " is removed from the course " + c.getCName() );	

}

var temp3 = function()
{
	var p = document.getElementById('delete_course');
	var x1 = p.options[p.selectedIndex].value;
	for(i=0;i<allCourses.length;i++)
	{
		if(allCourses[i].getCName()==x1)
		{
			RemoveCourse(allCourses[i]);
			viewCourses();
			tp();
			break;
		}
	}
}

var tp = function()
{
			var res="";
			for(j=0;j<allCourses.length;j++)
			{
				res+='<option>' + allCourses[j].getCName() + '</option>';
			}
			$('#add_course').html(res);
			$('#remove_course').html(res);
			$('#delete_course').html(res);
			$('#display_students').html(res);

}

var RemoveCourse = function(Course)
{

	for(j=0;j<allStudents.length;j++)
	{
		if(allStudents[j].findCourse(Course.getCId()))
		allStudents[j].dropCourse(Course.getCId());	
	}

	for(j=0;j<allCourses.length;j++)
	{
		if(allCourses[j].getCId()==Course.getCId())
		{
			allCourses.splice(j,1);
			console.log("The Course " + Course.getCName() + " has been removed");
			break;
		}
	}
}

var temp4 = function()
{
	var p = document.getElementById('delete_student');
	var x1 = p.options[p.selectedIndex].value;

	for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getName()==x1)
		{
			RemoveStudent(allStudents[i]);
			viewStudents();
			tp1();
			break;
		}
	}
}

var tp1 = function()
{
			var res="";
			for(j=0;j<allStudents.length;j++)
			{ 
				res+='<option>' + allStudents[j].getName() + '</option>';
			}
			$('#add_student').html(res);
			$('#remove_student').html(res);
			$('#delete_student').html(res);
			$('#display_courses').html(res);
}
var RemoveStudent = function(Student)
{


	for(j=0;j<allCourses.length;j++)
	{
		allCourses[j].dropStudent(Student.getRoll());
	}

	for(j=0;j<allStudents.length;j++)
	{
		if(allStudents[j].getName()==Student.getName())
		{
			allStudents.splice(j,1);
		//	alert("The Student " + Student.getName() + " has been removed");
			console.log("The Student " + Student.getName() + " has been removed");

			break;

		}
	}
}

var temp5 = function()
{
	var p = document.getElementById("display_students");
	var x1 = p.options[p.selectedIndex].value;
	var hel=[];
	for(i=0;i<allCourses.length;i++)
	{
		if(allCourses[i].getCName()==x1)
		{
			 hel = viewEnrolled(allCourses[i]);
			break;
		}
	}
			display_students(hel);
}

var display_students = function(array)
{

	var input="";
	for(j=0;j<array.length;j++)
	{
            input+='<tr>';
			input+='<td align="center">'+array[j].getRoll() +'</td>';
			input+='<td align="center">'+array[j].getName() +'</td>';
			input+='<td align="center">'+array[j].getYear() +'</td>';
			input+='</tr>';
	}

		$('#disp_students').html(input);	   
}
var viewEnrolled = function(Course)
{
	var array=[];
	for(j=0;j<allStudents.length;j++)
	{
		if(allStudents[j].findCourse(Course.getCId()))
		{
			array.push(allStudents[j]);
		}
	}
	return array;
}

var temp6 = function()
{

	var p = document.getElementById("display_courses");
	var x1 = p.options[p.selectedIndex].value;
	for(i=0;i<allStudents.length;i++)
	{
		if(allStudents[i].getName()==x1)
		{
           display_courses(viewCoursesTaken(allStudents[i]));
		   return;
		}
	}
	display_courses([]);
}

var display_courses = function(array)
{
   var input="";
	for(j=0;j<array.length;j++)
	{
			input+='<tr>';
			input+='<td align="center">'+array[j].getCId() +'</td>';
			input+='<td align="center">'+array[j].getCName() +'</td>';
			input+='</tr>';
	}
	$('#disp_courses').html(input);

}
var viewCoursesTaken = function(Student)
{
    var array=[];
	
	for(j=0;j<allCourses.length;j++)
	{
		if(allCourses[j].findStudent(Student.getRoll()))
		{
           array.push(allCourses[j]);
		}
	}
 return array;
}


module.exports.makeStudent = makeStudent;
module.exports.makeCourse = makeCourse;
module.exports.addNewStudent = addNewStudent;
module.exports.viewStudents = viewStudents;
module.exports.addNewCourse = addNewCourse;
module.exports.viewCourses = viewCourses;
module.exports.viewAllStudents = viewAllStudents;
module.exports.viewAllCourses = viewAllCourses;
module.exports.AddStudentToCourse = AddStudentToCourse;
module.exports.DropStudentFromCourse = DropStudentFromCourse;
module.exports.RemoveCourse = RemoveCourse;
module.exports.RemoveStudent = RemoveStudent;
module.exports.viewEnrolled = viewEnrolled;
module.exports.viewCoursesTaken = viewCoursesTaken;
module.exports.temp1 = temp1;
module.exports.temp2 = temp2;
module.exports.temp3 = temp3;
module.exports.temp4 = temp4;
module.exports.temp5 = temp5;
module.exports.temp6 = temp6;
module.exports.tp = tp;
module.exports.tp1 = tp1;
module.exports.display_students = display_students;
module.exports.display_courses = display_courses;
