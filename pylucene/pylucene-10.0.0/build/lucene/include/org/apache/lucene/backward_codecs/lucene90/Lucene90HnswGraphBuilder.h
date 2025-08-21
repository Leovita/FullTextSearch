#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90HnswGraphBuilder_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90HnswGraphBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
      namespace index {
        class VectorSimilarityFunction;
        class FloatVectorValues;
      }
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90OnHeapHnswGraph;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90HnswGraphBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b5d62ba8292dde66,
              mid_build_cfedaa00f11e9e43,
              mid_setInfoStream_3b3e574f321bdf38,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90HnswGraphBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90HnswGraphBuilder(const Lucene90HnswGraphBuilder& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *HNSW_COMPONENT;
            static jlong randSeed;

            Lucene90HnswGraphBuilder(const ::org::apache::lucene::index::FloatVectorValues &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint, jint, jlong);

            ::org::apache::lucene::backward_codecs::lucene90::Lucene90OnHeapHnswGraph build(const ::org::apache::lucene::index::FloatVectorValues &) const;
            void setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene90HnswGraphBuilder);
          extern PyTypeObject *PY_TYPE(Lucene90HnswGraphBuilder);

          class t_Lucene90HnswGraphBuilder {
          public:
            PyObject_HEAD
            Lucene90HnswGraphBuilder object;
            static PyObject *wrap_Object(const Lucene90HnswGraphBuilder&);
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
