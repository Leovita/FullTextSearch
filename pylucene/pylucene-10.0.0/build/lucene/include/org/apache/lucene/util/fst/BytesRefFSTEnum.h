#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
          class BytesRefFSTEnum$InputOutput;
        }
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class BytesRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_f8c761ef13f9ac4a,
              mid_current_e30bd5f4c54638c4,
              mid_next_e30bd5f4c54638c4,
              mid_seekCeil_0c969eec0cd00e02,
              mid_seekExact_0c969eec0cd00e02,
              mid_seekFloor_0c969eec0cd00e02,
              mid_getTargetLabel_bd89ce15dad49192,
              mid_getCurrentLabel_bd89ce15dad49192,
              mid_setCurrentLabel_8226bd0b0fc13dba,
              mid_grow_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesRefFSTEnum(const BytesRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            BytesRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::BytesRef &) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(BytesRefFSTEnum);
          extern PyTypeObject *PY_TYPE(BytesRefFSTEnum);

          class t_BytesRefFSTEnum {
          public:
            PyObject_HEAD
            BytesRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BytesRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BytesRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BytesRefFSTEnum&, PyTypeObject *);
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
