#ifndef org_apache_lucene_misc_GetTermInfo_H
#define org_apache_lucene_misc_GetTermInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Exception;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class GetTermInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getTermInfo_d458dfff2e6f4876,
            mid_main_ce41e621b30e91b1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GetTermInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GetTermInfo(const GetTermInfo& obj) : ::java::lang::Object(obj) {}

          GetTermInfo();

          static void getTermInfo(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::Term &);
          static void main(const JArray< ::java::lang::String > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(GetTermInfo);
        extern PyTypeObject *PY_TYPE(GetTermInfo);

        class t_GetTermInfo {
        public:
          PyObject_HEAD
          GetTermInfo object;
          static PyObject *wrap_Object(const GetTermInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
