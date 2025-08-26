#ifndef org_apache_lucene_geo_Tessellator$Monitor_H
#define org_apache_lucene_geo_Tessellator$Monitor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Tessellator$Triangle;
        class Point;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator$Monitor : public ::java::lang::Object {
         public:
          enum {
            mid_currentState_df232b549cc81b3b,
            mid_endSplit_ee46a189998009d6,
            mid_startSplit_df232b549cc81b3b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator$Monitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator$Monitor(const Tessellator$Monitor& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *COMPLETED;
          static ::java::lang::String *FAILED;

          void currentState(const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
          void endSplit(const ::java::lang::String &) const;
          void startSplit(const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Tessellator$Monitor);
        extern PyTypeObject *PY_TYPE(Tessellator$Monitor);

        class t_Tessellator$Monitor {
        public:
          PyObject_HEAD
          Tessellator$Monitor object;
          static PyObject *wrap_Object(const Tessellator$Monitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
