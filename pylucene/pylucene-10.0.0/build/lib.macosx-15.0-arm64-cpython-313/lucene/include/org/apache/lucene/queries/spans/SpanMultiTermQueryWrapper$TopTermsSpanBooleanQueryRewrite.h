#ifndef org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H
#define org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H

#include "org/apache/lucene/queries/spans/SpanMultiTermQueryWrapper$SpanRewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite : public ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_getSize_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_0424510fe17059ea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite& obj) : ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {}

            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getSize() const;
            jint hashCode() const;
            ::org::apache::lucene::queries::spans::SpanQuery rewrite(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite);

          class t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
