#ifndef org_apache_lucene_queries_spans_SpanNearQuery$Builder_H
#define org_apache_lucene_queries_spans_SpanNearQuery$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanNearQuery$Builder;
          class SpanNearQuery;
          class SpanQuery;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanNearQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_855d5fa744141d54,
              mid_addClause_d2654fdd2d5ccb4a,
              mid_addGap_a3b5cc37014a4d77,
              mid_build_4f71365384ff680e,
              mid_setSlop_a3b5cc37014a4d77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$Builder(const SpanNearQuery$Builder& obj) : ::java::lang::Object(obj) {}

            SpanNearQuery$Builder(const ::java::lang::String &, jboolean);

            SpanNearQuery$Builder addClause(const ::org::apache::lucene::queries::spans::SpanQuery &) const;
            SpanNearQuery$Builder addGap(jint) const;
            ::org::apache::lucene::queries::spans::SpanNearQuery build() const;
            SpanNearQuery$Builder setSlop(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$Builder);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$Builder);

          class t_SpanNearQuery$Builder {
          public:
            PyObject_HEAD
            SpanNearQuery$Builder object;
            static PyObject *wrap_Object(const SpanNearQuery$Builder&);
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
