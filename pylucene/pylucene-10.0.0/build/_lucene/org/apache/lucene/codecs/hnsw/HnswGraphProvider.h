#ifndef org_apache_lucene_codecs_hnsw_HnswGraphProvider_H
#define org_apache_lucene_codecs_hnsw_HnswGraphProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraph;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {

          class HnswGraphProvider : public ::java::lang::Object {
           public:
            enum {
              mid_getGraph_f4c199e0f26ff1bf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphProvider(const HnswGraphProvider& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::hnsw::HnswGraph getGraph(const ::java::lang::String &) const;
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
      namespace codecs {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(HnswGraphProvider);
          extern PyTypeObject *PY_TYPE(HnswGraphProvider);

          class t_HnswGraphProvider {
          public:
            PyObject_HEAD
            HnswGraphProvider object;
            static PyObject *wrap_Object(const HnswGraphProvider&);
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
