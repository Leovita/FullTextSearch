#ifndef org_apache_lucene_document_DateTools_H
#define org_apache_lucene_document_DateTools_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Date;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DateTools : public ::java::lang::Object {
         public:
          enum {
            mid_dateToString_9d14fee845232024,
            mid_round_e7d9fb8a34a52989,
            mid_round_f39bf20e186400ef,
            mid_stringToDate_89d3a451a60180c0,
            mid_stringToTime_490f1686ea1cfda6,
            mid_timeToString_570cb673633c86eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DateTools(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DateTools(const DateTools& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String dateToString(const ::java::util::Date &, const ::org::apache::lucene::document::DateTools$Resolution &);
          static ::java::util::Date round(const ::java::util::Date &, const ::org::apache::lucene::document::DateTools$Resolution &);
          static jlong round(jlong, const ::org::apache::lucene::document::DateTools$Resolution &);
          static ::java::util::Date stringToDate(const ::java::lang::String &);
          static jlong stringToTime(const ::java::lang::String &);
          static ::java::lang::String timeToString(jlong, const ::org::apache::lucene::document::DateTools$Resolution &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DateTools);
        extern PyTypeObject *PY_TYPE(DateTools);

        class t_DateTools {
        public:
          PyObject_HEAD
          DateTools object;
          static PyObject *wrap_Object(const DateTools&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
