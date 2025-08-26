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
                mid_init$_b44ab409dc5579ae,
                mid_centroids_c9430de4b1728f86,
                mid_equals_00d17418847797d4,
                mid_hashCode_bd89ce15dad49192,
                mid_toString_e7df854526d67fa3,
                mid_vectorCentroids_71bed1b6b62c4435,
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
