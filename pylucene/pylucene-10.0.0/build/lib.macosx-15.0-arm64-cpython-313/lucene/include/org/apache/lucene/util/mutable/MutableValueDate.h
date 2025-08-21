#ifndef org_apache_lucene_util_mutable_MutableValueDate_H
#define org_apache_lucene_util_mutable_MutableValueDate_H

#include "org/apache/lucene/util/mutable/MutableValueLong.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValueDate : public ::org::apache::lucene::util::mutable$::MutableValueLong {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_duplicate_28c3cf024c0e87ef,
              mid_toObject_5655ed8670534604,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValueDate(jobject obj) : ::org::apache::lucene::util::mutable$::MutableValueLong(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValueDate(const MutableValueDate& obj) : ::org::apache::lucene::util::mutable$::MutableValueLong(obj) {}

            MutableValueDate();

            ::org::apache::lucene::util::mutable$::MutableValue duplicate() const;
            ::java::lang::Object toObject() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          extern PyType_Def PY_TYPE_DEF(MutableValueDate);
          extern PyTypeObject *PY_TYPE(MutableValueDate);

          class t_MutableValueDate {
          public:
            PyObject_HEAD
            MutableValueDate object;
            static PyObject *wrap_Object(const MutableValueDate&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
