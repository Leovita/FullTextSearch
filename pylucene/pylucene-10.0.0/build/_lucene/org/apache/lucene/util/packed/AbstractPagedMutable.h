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
              mid_get_3dc1c6e3a5a0baf0,
              mid_grow_a9e6c6184d585a53,
              mid_grow_2727038977e88366,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_resize_2727038977e88366,
              mid_set_9ebf8c93de5f0fe1,
              mid_size_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
              mid_newUnfilledCopy_2727038977e88366,
              mid_newMutable_aa50c3146efe12b9,
              mid_fillPages_e7bdbe105ce1bafb,
              mid_baseRamBytesUsed_0f176418e3e16541,
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
