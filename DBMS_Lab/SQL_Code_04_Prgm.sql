
desc student

create table faculty
(fid int,
fname varchar(30),
deptid int,
primary key(fid)
);

desc faculty;

create table class 
(cname varchar(30),
meets_at timestamp,
room varchar(30),
fid integer,
primary key(fid,cname),
foreign key(fid)references faculty(fid));



create table enrolled(snum int,
cname varchar(30),
primary key(snum),
foreign key(snum)references student(snum));


create table enrolled(snum int,
cname varchar(30),
primary key(snum,cname),
foreign key(snum)references student(snum));

insert into student VALUES(101,'Yaseen','CS','JR',19);
insert into student VALUES(102,'Arbaz','CS','SR',20);
insert into student VALUES(103,'Abhishek','IS','SR',21);
insert into student VALUES(104,'Chirag','CS','JR',20);
insert into student VALUES(105,'Chiru','IS','SR',21);

select * from student;

insert into faculty values(11,'Dr NV',02);
insert into faculty values(12,'Dr GS',01);
insert into faculty values(13,'Dr UV',02);
insert into faculty values(14,'Dr BJ',02);
insert into faculty values(15,'NM',01);

select * from faculty;

desc class;

insert into class values('OO_Java','28.02.20.01:02:00 PM',407,11);
insert into class values('TFCS','22.03.20.03:30:00 PM',402,12);
insert into class values('ADA','02.03.20.11:15:00 AM',404,13);
insert into class values('DBMS','28.02.20.11:15:00 AM',128,14);
insert into class values('OS','20.03.20.12.10:00 AM',206,15);

select * from class;
desc enrolled;

insert into enrolled values(101,'OO_Java');
insert into enrolled values(102,'TFCS');
insert into enrolled values(103,'ADA');
insert into enrolled values(104,'DBMS');
insert into enrolled values(105,'OS');

select * from enrolled;
COMMIT;