        ! variable step interfaces

        module subroutine rkbs32(me,t,x,h,xf,terr)
            implicit none
            class(rkbs32_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkbs32
        module subroutine rkf45(me,t,x,h,xf,terr)
            implicit none
            class(rkf45_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf45
        module subroutine rkck54(me,t,x,h,xf,terr)
            implicit none
            class(rkck54_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkck54
        module subroutine rkdp54(me,t,x,h,xf,terr)
            implicit none
            class(rkdp54_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkdp54
        module subroutine rkt54(me,t,x,h,xf,terr)
            implicit none
            class(rkt54_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkt54
        module subroutine rks54(me,t,x,h,xf,terr)
            implicit none
            class(rks54_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rks54
        module subroutine rkdp65(me,t,x,h,xf,terr)
            implicit none
            class(rkdp65_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkdp65
        module subroutine rkc65(me,t,x,h,xf,terr)
            implicit none
            class(rkc65_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkc65
        module subroutine rktp64(me,t,x,h,xf,terr)
            implicit none
            class(rktp64_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rktp64
        module subroutine rkv65e(me,t,x,h,xf,terr)
            implicit none
            class(rkv65e_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv65e
        module subroutine rktf65(me,t,x,h,xf,terr)
            implicit none
            class(rktf65_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rktf65
        module subroutine rkv65r(me,t,x,h,xf,terr)
            implicit none
            class(rkv65r_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv65r
        module subroutine rkv76e(me,t,x,h,xf,terr)
            implicit none
            class(rkv76e_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv76e
        module subroutine rkv76r(me,t,x,h,xf,terr)
            implicit none
            class(rkv76r_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv76r
        module subroutine rkf78(me,t,x,h,xf,terr)
            implicit none
            class(rkf78_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf78
        module subroutine rkdp87(me,t,x,h,xf,terr)
            implicit none
            class(rkdp87_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkdp87
        module subroutine rkv87e(me,t,x,h,xf,terr)
            implicit none
            class(rkv87e_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv87e
        module subroutine rkv87r(me,t,x,h,xf,terr)
            implicit none
            class(rkv87r_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv87r
        module subroutine rkk87(me,t,x,h,xf,terr)
            implicit none
            class(rkk87_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkk87
        module subroutine rkv78(me,t,x,h,xf,terr)
            implicit none
            class(rkv78_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv78
        module subroutine rktp75(me,t,x,h,xf,terr)
            implicit none
            class(rktp75_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rktp75
        module subroutine rktmy7(me,t,x,h,xf,terr)
            implicit none
            class(rktmy7_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rktmy7
        module subroutine rktp86(me,t,x,h,xf,terr)
            implicit none
            class(rktp86_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rktp86
        module subroutine rkf89(me,t,x,h,xf,terr)
            implicit none
            class(rkf89_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf89
        module subroutine rkv89(me,t,x,h,xf,terr)
            implicit none
            class(rkv89_class),intent(inout)     :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv89
        module subroutine rkt98a(me,t,x,h,xf,terr)
            implicit none
            class(rkt98a_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkt98a
        module subroutine rkv98e(me,t,x,h,xf,terr)
            implicit none
            class(rkv98e_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv98e
        module subroutine rkv98r(me,t,x,h,xf,terr)
            implicit none
            class(rkv98r_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkv98r
        module subroutine rkf108(me,t,x,h,xf,terr)
            implicit none
            class(rkf108_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf108
        module subroutine rkc108(me,t,x,h,xf,terr)
            implicit none
            class(rkc108_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkc108
        module subroutine rkb109(me,t,x,h,xf,terr)
            implicit none
            class(rkb109_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkb109
        module subroutine rks1110a(me,t,x,h,xf,terr)
            implicit none
            class(rks1110a_class),intent(inout)  :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rks1110a
        module subroutine rkf1210(me,t,x,h,xf,terr)
            implicit none
            class(rkf1210_class),intent(inout)   :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf1210
        module subroutine rko129(me,t,x,h,xf,terr)
            implicit none
            class(rko129_class),intent(inout)    :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rko129
        module subroutine rkf1412(me,t,x,h,xf,terr)
            implicit none
            class(rkf1412_class),intent(inout)   :: me
            real(wp),intent(in)                  :: t
            real(wp),dimension(me%n),intent(in)  :: x
            real(wp),intent(in)                  :: h
            real(wp),dimension(me%n),intent(out) :: xf
            real(wp),dimension(me%n),intent(out) :: terr
        end subroutine rkf1412