#ifndef org_apache_lucene_search_NamedMatches_H
#define org_apache_lucene_search_NamedMatches_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class NamedMatches;
        class Matches;
        class MatchesIterator;
        class Query;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
    class Collection;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class NamedMatches : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1e1d066dcb5706fc,
            mid_findNamedMatches_e830a51d4469d008,
            mid_getMatches_afa9177134b33792,
            mid_getName_e7df854526d67fa3,
            mid_getSubMatches_4a269b968b3a511f,
            mid_iterator_c7985fafdcf40e83,
            mid_wrapQuery_feaf0e31f2b72add,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedMatches(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NamedMatches(const NamedMatches& obj) : ::java::lang::Object(obj) {}

          NamedMatches(const ::java::lang::String &, const ::org::apache::lucene::search::Matches &);

          static ::java::util::List findNamedMatches(const ::org::apache::lucene::search::Matches &);
          ::org::apache::lucene::search::MatchesIterator getMatches(const ::java::lang::String &) const;
          ::java::lang::String getName() const;
          ::java::util::Collection getSubMatches() const;
          ::java::util::Iterator iterator() const;
          static ::org::apache::lucene::search::Query wrapQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &);
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
        extern PyType_Def PY_TYPE_DEF(NamedMatches);
        extern PyTypeObject *PY_TYPE(NamedMatches);

        class t_NamedMatches {
        public:
          PyObject_HEAD
          NamedMatches object;
          static PyObject *wrap_Object(const NamedMatches&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
