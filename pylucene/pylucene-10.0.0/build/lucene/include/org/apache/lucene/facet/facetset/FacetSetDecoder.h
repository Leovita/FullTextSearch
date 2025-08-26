#ifndef org_apache_lucene_facet_facetset_FacetSetDecoder_H
#define org_apache_lucene_facet_facetset_FacetSetDecoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace facet {
        namespace facetset {

          class FacetSetDecoder : public ::java::lang::Object {
           public:
            enum {
              mid_decode_913846e4d48c88a9,
              mid_decodeInts_913846e4d48c88a9,
              mid_decodeLongs_913846e4d48c88a9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetSetDecoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetSetDecoder(const FacetSetDecoder& obj) : ::java::lang::Object(obj) {}

            jint decode(const ::org::apache::lucene::util::BytesRef &, jint, const JArray< jlong > &) const;
            static jint decodeInts(const ::org::apache::lucene::util::BytesRef &, jint, const JArray< jlong > &);
            static jint decodeLongs(const ::org::apache::lucene::util::BytesRef &, jint, const JArray< jlong > &);
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
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(FacetSetDecoder);
          extern PyTypeObject *PY_TYPE(FacetSetDecoder);

          class t_FacetSetDecoder {
          public:
            PyObject_HEAD
            FacetSetDecoder object;
            static PyObject *wrap_Object(const FacetSetDecoder&);
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
