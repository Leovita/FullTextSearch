#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace fst {
          class BytesRefFSTEnum$InputOutput;
          class FST;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
              mid_init$_d80c376272ec8dd6,
              mid_current_bf90c3c6cb129506,
              mid_next_bf90c3c6cb129506,
              mid_seekCeil_d26856094b0041d9,
              mid_seekExact_d26856094b0041d9,
              mid_seekFloor_d26856094b0041d9,
              mid_getTargetLabel_20fbf7565993c3d7,
              mid_getCurrentLabel_20fbf7565993c3d7,
              mid_setCurrentLabel_540b2b23d51b1efd,
              mid_grow_3720c61b0679eb3e,
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
