#ifndef org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H
#define org_apache_lucene_util_graph_GraphTokenStreamFiniteStrings_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
      namespace analysis {
        class TokenStream;
      }
      namespace index {
        class Term;
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
              mid_init$_4fe096967a533954,
              mid_articulationPoints_4b72a28a860ae838,
              mid_getFiniteStrings_c7985fafdcf40e83,
              mid_getFiniteStrings_5fa822a9a831277e,
              mid_getTerms_b4b9401c877452e3,
              mid_getTerms_625aeec41a7f5fb6,
              mid_hasSidePath_a8281eb3b9d9672d,
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
