outfile:add_student.o delete_student.o Show_student.o modify_student.o save_student.o sort_student.o main.o
	cc add_student.c delete_student.c Show_student.c modify_student.c save_student.c sort_student.c main.c -o student

add_student.o:add_student.c
	cc -c add_student.c

delete_student.o:delete_student.c
	cc -c delete_student.c

Show_student.o:Show_student.c
	cc -c Show_student.c

modify_student.o:modify_student.c
	cc -c modify_student.c

save_student.o:save_student.c
	cc -c save_student.c

sort_student.o:sort_student.c
	cc -c sort_student.c

main.o:main.c
	cc -c main.c
