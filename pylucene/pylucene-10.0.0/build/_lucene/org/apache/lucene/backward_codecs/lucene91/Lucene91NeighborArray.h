#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91NeighborArray_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91NeighborArray_H

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
        namespace lucene91 {

          class Lucene91NeighborArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_add_a18b0cdf76a9509e,
              mid_clear_e7bdbe105ce1bafb,
              mid_node_4b72a28a860ae838,
              mid_removeLast_e7bdbe105ce1bafb,
              mid_score_67d89dc3894661ff,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91NeighborArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91NeighborArray(const Lucene91NeighborArray& obj) : ::java::lang::Object(obj) {}

            Lucene91NeighborArray(jint);

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
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91NeighborArray);
          extern PyTypeObject *PY_TYPE(Lucene91NeighborArray);

          class t_Lucene91NeighborArray {
          public:
            PyObject_HEAD
            Lucene91NeighborArray object;
            static PyObject *wrap_Object(const Lucene91NeighborArray&);
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
