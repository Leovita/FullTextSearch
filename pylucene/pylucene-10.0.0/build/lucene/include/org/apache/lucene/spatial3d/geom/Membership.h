#ifndef org_apache_lucene_spatial3d_geom_Membership_H
#define org_apache_lucene_spatial3d_geom_Membership_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
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
      namespace spatial3d {
        namespace geom {

          class Membership : public ::java::lang::Object {
           public:
            enum {
              mid_isWithin_f78acf28287584e8,
              mid_isWithin_7ff1eb501b1de7c2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Membership(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Membership(const Membership& obj) : ::java::lang::Object(obj) {}

            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(Membership);
          extern PyTypeObject *PY_TYPE(Membership);

          class t_Membership {
          public:
            PyObject_HEAD
            Membership object;
            static PyObject *wrap_Object(const Membership&);
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
