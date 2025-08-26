#ifndef org_apache_lucene_search_QueryVisitor_H
#define org_apache_lucene_search_QueryVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class QueryVisitor;
        class Query;
      }
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
        }
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
    class Set;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_acceptField_94f7e759d94961b0,
            mid_consumeTerms_e38f28ef925b0c54,
            mid_consumeTermsMatching_383497160206f014,
            mid_getSubVisitor_a175a038b3441be8,
            mid_termCollector_71f54b3481c1dbbf,
            mid_visitLeaf_a28ff1cdbaf0bf6c,
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
