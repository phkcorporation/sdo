connect to company

drop table company
drop table department
drop table employee

create table company (  id integer not null generated by default as identity,  \
    name varchar(20), employee_of_the_month integer, \
    primary key(id))

create table department ( id integer not null generated by default as identity, \
    name varchar(20), location varchar(10), \
    number integer, co_id integer, primary key(id) )

create table employee ( id integer not null generated by default as identity, \
    name varchar(20), SN char(4), \
    manager smallint, dept_id integer, primary key(id))