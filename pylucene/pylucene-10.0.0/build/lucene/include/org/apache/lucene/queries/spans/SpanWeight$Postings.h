#ifndef org_apache_lucene_queries_spans_SpanWeight$Postings_H
#define org_apache_lucene_queries_spans_SpanWeight$Postings_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanWeight$Postings;
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

          class SpanWeight$Postings : public ::java::lang::Enum {
           public:
            enum {
              mid_atLeast_7b1d5345e9809b98,
              mid_getRequiredPostings_bd89ce15dad49192,
              mid_valueOf_705ab4049c687eac,
              mid_values_ac867a07053670c8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWeight$Postings(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWeight$Postings(const SpanWeight$Postings& obj) : ::java::lang::Enum(obj) {}

            static SpanWeight$Postings *OFFSETS;
            static SpanWeight$Postings *PAYLOADS;
            static SpanWeight$Postings *POSITIONS;

            SpanWeight$Postings atLeast(const SpanWeight$Postings &) const;
            jint getRequiredPostings() const;
            static SpanWeight$Postings valueOf(const ::java::lang::String &);
            static JArray< SpanWeight$Postings > values();
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
          extern PyType_Def PY_TYPE_DEF(SpanWeight$Postings);
          extern PyTypeObject *PY_TYPE(SpanWeight$Postings);

          class t_SpanWeight$Postings {
          public:
            PyObject_HEAD
            SpanWeight$Postings object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanWeight$Postings *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanWeight$Postings&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanWeight$Postings&, PyTypeObject *);
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
