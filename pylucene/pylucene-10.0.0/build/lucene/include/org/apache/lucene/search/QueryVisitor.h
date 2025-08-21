#ifndef org_apache_lucene_search_QueryVisitor_H
#define org_apache_lucene_search_QueryVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
        class BooleanClause$Occur;
      }
      namespace index {
        class Term;
      }
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class QueryVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_acceptField_4a13a663b5c11133,
            mid_consumeTerms_1d31265646f78664,
            mid_consumeTermsMatching_3243e0ccb20fb4ce,
            mid_getSubVisitor_ed5fcf5599bddd2b,
            mid_termCollector_e8ccbf000d586c49,
            mid_visitLeaf_d7278af460a7b96a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryVisitor(const QueryVisitor& obj) : ::java::lang::Object(obj) {}

          static QueryVisitor *EMPTY_VISITOR;

          QueryVisitor();

          jboolean acceptField(const ::java::lang::String &) const;
          void consumeTerms(const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::index::Term > &) const;
          void consumeTermsMatching(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Supplier &) const;
          QueryVisitor getSubVisitor(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::Query &) const;
          static QueryVisitor termCollector(const ::java::util::Set &);
          void visitLeaf(const ::org::apache::lucene::search::Query &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(QueryVisitor);
        extern PyTypeObject *PY_TYPE(QueryVisitor);

        class t_QueryVisitor {
        public:
          PyObject_HEAD
          QueryVisitor object;
          static PyObject *wrap_Object(const QueryVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
