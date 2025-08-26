#ifndef org_apache_lucene_facet_range_OverlappingLongRangeCounter$LongRangeNode_H
#define org_apache_lucene_facet_range_OverlappingLongRangeCounter$LongRangeNode_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class OverlappingLongRangeCounter$LongRangeNode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class OverlappingLongRangeCounter$LongRangeNode : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d572e30ef8d49010,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OverlappingLongRangeCounter$LongRangeNode(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OverlappingLongRangeCounter$LongRangeNode(const OverlappingLongRangeCounter$LongRangeNode& obj) : ::java::lang::Object(obj) {}

            OverlappingLongRangeCounter$LongRangeNode(jlong, jlong, const OverlappingLongRangeCounter$LongRangeNode &, const OverlappingLongRangeCounter$LongRangeNode &, jint);

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
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(OverlappingLongRangeCounter$LongRangeNode);
          extern PyTypeObject *PY_TYPE(OverlappingLongRangeCounter$LongRangeNode);

          class t_OverlappingLongRangeCounter$LongRangeNode {
          public:
            PyObject_HEAD
            OverlappingLongRangeCounter$LongRangeNode object;
            static PyObject *wrap_Object(const OverlappingLongRangeCounter$LongRangeNode&);
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
