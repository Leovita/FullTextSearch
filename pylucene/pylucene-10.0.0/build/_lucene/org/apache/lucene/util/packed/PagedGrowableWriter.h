#ifndef org_apache_lucene_util_packed_PagedGrowableWriter_H
#define org_apache_lucene_util_packed_PagedGrowableWriter_H

#include "org/apache/lucene/util/packed/AbstractPagedMutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PagedGrowableWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PagedGrowableWriter : public ::org::apache::lucene::util::packed::AbstractPagedMutable {
           public:
            enum {
              mid_init$_c7d673da027f943b,
              mid_newUnfilledCopy_a443690dd80ebc78,
              mid_newMutable_aa50c3146efe12b9,
              mid_baseRamBytesUsed_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PagedGrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PagedGrowableWriter(const PagedGrowableWriter& obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {}

            PagedGrowableWriter(jlong, jint, jint, jfloat);
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
          extern PyType_Def PY_TYPE_DEF(PagedGrowableWriter);
          extern PyTypeObject *PY_TYPE(PagedGrowableWriter);

          class t_PagedGrowableWriter {
          public:
            PyObject_HEAD
            PagedGrowableWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PagedGrowableWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PagedGrowableWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PagedGrowableWriter&, PyTypeObject *);
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
