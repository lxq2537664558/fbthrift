#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.py3.server cimport cServerInterface



cdef extern from "src/gen-cpp2/SimpleService.h" namespace "py3::simple":
    cdef cppclass cSimpleServiceSvAsyncIf "py3::simple::SimpleServiceSvAsyncIf":
      pass

    cdef cppclass cSimpleServiceSvIf "py3::simple::SimpleServiceSvIf"(
            cSimpleServiceSvAsyncIf,
            cServerInterface):
        pass



cdef extern from "src/gen-py3/module/services_wrapper.h" namespace "py3::simple":
    cdef cppclass cSimpleServiceWrapper "py3::simple::SimpleServiceWrapper"(
        cSimpleServiceSvIf
    ):
        pass

    shared_ptr[cServerInterface] cSimpleServiceInterface "py3::simple::SimpleServiceInterface"(PyObject *if_object)
