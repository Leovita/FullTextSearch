#ifndef org_apache_lucene_search_NamedMatches_H
#define org_apache_lucene_search_NamedMatches_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class Matches;
        class MatchesIterator;
        class NamedMatches;
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
            mid_init$_fc19a8708189eae5,
            mid_findNamedMatches_c1d0cceeb4e08115,
            mid_getMatches_b5db4e114c82a54d,
            mid_getName_09a7afff1868fc5e,
            mid_getSubMatches_aa58b3beec16cbbd,
            mid_iterator_0db4c76ff7ee995b,
            mid_wrapQuery_7e6debb9e2c7b0ca,
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
