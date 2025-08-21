#ifndef org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H
#define org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
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
        class AttributeSource;
      }
      namespace index {
        class Term;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace graph {

          class GraphTokenStreamFiniteStrings : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_articulationPoints_623cd4a044ba647a,
              mid_getFiniteStrings_0db4c76ff7ee995b,
              mid_getFiniteStrings_23319641f2a33d96,
              mid_getTerms_3e47fe599d76d583,
              mid_getTerms_2e100903f753f117,
              mid_hasSidePath_ae22d3a856ad56f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphTokenStreamFiniteStrings(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphTokenStreamFiniteStrings(const GraphTokenStreamFiniteStrings& obj) : ::java::lang::Object(obj) {}

            GraphTokenStreamFiniteStrings(const ::org::apache::lucene::analysis::TokenStream &);

            JArray< jint > articulationPoints() const;
            ::java::util::Iterator getFiniteStrings() const;
            ::java::util::Iterator getFiniteStrings(jint, jint) const;
            ::java::util::List getTerms(jint) const;
            JArray< ::org::apache::lucene::index::Term > getTerms(const ::java::lang::String &, jint) const;
            jboolean hasSidePath(jint) const;
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
      namespace util {
        namespace graph {
          extern PyType_Def PY_TYPE_DEF(GraphTokenStreamFiniteStrings);
          extern PyTypeObject *PY_TYPE(GraphTokenStreamFiniteStrings);

          class t_GraphTokenStreamFiniteStrings {
          public:
            PyObject_HEAD
            GraphTokenStreamFiniteStrings object;
            static PyObject *wrap_Object(const GraphTokenStreamFiniteStrings&);
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
