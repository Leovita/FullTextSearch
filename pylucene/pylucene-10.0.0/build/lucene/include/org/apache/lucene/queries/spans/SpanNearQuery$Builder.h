#ifndef org_apache_lucene_queries_spans_SpanNearQuery$Builder_H
#define org_apache_lucene_queries_spans_SpanNearQuery$Builder_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
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
              mid_init$_0c3fb5e97dae8b90,
              mid_addClause_608c3b8d7dfb48aa,
              mid_addGap_fd105826beaf55d6,
              mid_build_e7f57f842f49b3fe,
              mid_setSlop_fd105826beaf55d6,
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
