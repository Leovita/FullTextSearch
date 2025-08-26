#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

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

          class IntsRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_f8c761ef13f9ac4a,
              mid_current_d0241ad486883852,
              mid_next_d0241ad486883852,
              mid_seekCeil_ba64bb664afee8c2,
              mid_seekExact_ba64bb664afee8c2,
              mid_seekFloor_ba64bb664afee8c2,
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
