#ifndef org_apache_lucene_sandbox_codecs_quantization_KMeans$Results_H
#define org_apache_lucene_sandbox_codecs_quantization_KMeans$Results_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {

            class KMeans$Results : public ::java::lang::Record {
             public:
              enum {
                mid_init$_edc24c14ccf8c437,
                mid_centroids_36fa1edc223eb8d0,
                mid_equals_570b5248a6da3ef6,
                mid_hashCode_20fbf7565993c3d7,
                mid_toString_09a7afff1868fc5e,
                mid_vectorCentroids_fe34e74b7edf7d4f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KMeans$Results(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KMeans$Results(const KMeans$Results& obj) : ::java::lang::Record(obj) {}

              KMeans$Results(const JArray< JArray< jfloat > > &, const JArray< jshort > &);

              JArray< JArray< jfloat > > centroids() const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              ::java::lang::String toString() const;
              JArray< jshort > vectorCentroids() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            extern PyType_Def PY_TYPE_DEF(KMeans$Results);
            extern PyTypeObject *PY_TYPE(KMeans$Results);

            class t_KMeans$Results {
            public:
              PyObject_HEAD
              KMeans$Results object;
              static PyObject *wrap_Object(const KMeans$Results&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
