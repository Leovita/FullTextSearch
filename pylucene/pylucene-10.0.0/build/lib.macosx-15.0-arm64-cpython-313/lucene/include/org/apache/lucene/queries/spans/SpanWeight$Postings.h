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
              mid_atLeast_a3223f1f334eeff5,
              mid_getRequiredPostings_20fbf7565993c3d7,
              mid_valueOf_95e8e397e4884509,
              mid_values_0fa21665e59a2c0c,
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
