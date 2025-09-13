SRCS = project/src/main.cpp \
       project/src/vulnerable_buffer.cpp \
       project/src/format_string.cpp \
       project/src/command_injection.cpp

hello: $(SRCS)
	g++ -Wl,--no-as-needed -o project/build/hello $(SRCS) \
	    -Lproject/lib \
	    -lcom_err -lverto -lgssapi_krb5 -lk5crypto -lkrad -lkrb5 -lkrb5support
