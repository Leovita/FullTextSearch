#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90NeighborArray_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90NeighborArray_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90NeighborArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              mid_add_06e0b8d4c1d7906b,
              mid_clear_3720c61b0679eb3e,
              mid_node_623cd4a044ba647a,
              mid_removeLast_3720c61b0679eb3e,
              mid_score_808165844ea67079,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90NeighborArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90NeighborArray(const Lucene90NeighborArray& obj) : ::java::lang::Object(obj) {}

            Lucene90NeighborArray(jint);

            void add(jint, jfloat) const;
            void clear() const;
            JArray< jint > node() const;
            void removeLast() const;
            JArray< jfloat > score() const;
            jint size() const;
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
      namespace backward_codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90NeighborArray);
          extern PyTypeObject *PY_TYPE(Lucene90NeighborArray);

          class t_Lucene90NeighborArray {
          public:
            PyObject_HEAD
            Lucene90NeighborArray object;
            static PyObject *wrap_Object(const Lucene90NeighborArray&);
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
