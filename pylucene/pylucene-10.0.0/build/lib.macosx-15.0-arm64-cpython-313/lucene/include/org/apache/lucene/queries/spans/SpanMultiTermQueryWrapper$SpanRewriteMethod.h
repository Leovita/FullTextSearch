#ifndef org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper$SpanRewriteMethod_H
#define org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper$SpanRewriteMethod_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanMultiTermQueryWrapper$SpanRewriteMethod : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_rewrite_0424510fe17059ea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper$SpanRewriteMethod(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper$SpanRewriteMethod(const SpanMultiTermQueryWrapper$SpanRewriteMethod& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}

            SpanMultiTermQueryWrapper$SpanRewriteMethod();

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
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper$SpanRewriteMethod);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper$SpanRewriteMethod);

          class t_SpanMultiTermQueryWrapper$SpanRewriteMethod {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper$SpanRewriteMethod object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper$SpanRewriteMethod *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$SpanRewriteMethod&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$SpanRewriteMethod&, PyTypeObject *);
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
