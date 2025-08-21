#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum_H

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
          class IntsRefFSTEnum$InputOutput;
          class FST;
        }
        class IntsRef;
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

          class IntsRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_d80c376272ec8dd6,
              mid_current_4eda887409a38c6e,
              mid_next_4eda887409a38c6e,
              mid_seekCeil_c1682b0368229960,
              mid_seekExact_c1682b0368229960,
              mid_seekFloor_c1682b0368229960,
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

            explicit IntsRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntsRefFSTEnum(const IntsRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            IntsRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntsRefFSTEnum);
          extern PyTypeObject *PY_TYPE(IntsRefFSTEnum);

          class t_IntsRefFSTEnum {
          public:
            PyObject_HEAD
            IntsRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntsRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntsRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntsRefFSTEnum&, PyTypeObject *);
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
