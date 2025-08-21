#ifndef org_apache_lucene_util_packed_AbstractPagedMutable_H
#define org_apache_lucene_util_packed_AbstractPagedMutable_H

#include "org/apache/lucene/util/LongValues.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace packed {
          class AbstractPagedMutable;
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
        namespace packed {

          class AbstractPagedMutable : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_get_91d66fa3ea476cea,
              mid_grow_50283e96e04801b1,
              mid_grow_50032b6fa6a69262,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_resize_50032b6fa6a69262,
              mid_set_c3501637982a28bc,
              mid_size_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              mid_fillPages_3720c61b0679eb3e,
              mid_baseRamBytesUsed_16939d9d0a9a9721,
              mid_newUnfilledCopy_50032b6fa6a69262,
              mid_newMutable_6cba1b578155166a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractPagedMutable(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractPagedMutable(const AbstractPagedMutable& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            AbstractPagedMutable grow() const;
            AbstractPagedMutable grow(jlong) const;
            jlong ramBytesUsed() const;
            AbstractPagedMutable resize(jlong) const;
            void set(jlong, jlong) const;
            jlong size() const;
            ::java::lang::String toString() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractPagedMutable);
          extern PyTypeObject *PY_TYPE(AbstractPagedMutable);

          class t_AbstractPagedMutable {
          public:
            PyObject_HEAD
            AbstractPagedMutable object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractPagedMutable *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractPagedMutable&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractPagedMutable&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
