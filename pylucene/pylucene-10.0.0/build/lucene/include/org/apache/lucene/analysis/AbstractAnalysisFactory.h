#ifndef org_apache_lucene_analysis_AbstractAnalysisFactory_H
#define org_apache_lucene_analysis_AbstractAnalysisFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AbstractAnalysisFactory : public ::java::lang::Object {
         public:
          enum {
            mid_get_50a4de80725429ea,
            mid_get_cebc26e8c3987f43,
            mid_get_ce1747da88a022d3,
            mid_get_6f9515a3a31264ed,
            mid_get_e9020617e26ec0a2,
            mid_getChar_a125cc629a8edb9c,
            mid_getClassArg_e7df854526d67fa3,
            mid_getLuceneMatchVersion_098638c0dde6da21,
            mid_getOriginalArgs_5004bdf19ed33453,
            mid_getSet_b2847b6fc1cb4fbd,
            mid_isExplicitLuceneMatchVersion_9aa4f33e82ea333f,
            mid_require_50a4de80725429ea,
            mid_require_ce1747da88a022d3,
            mid_require_0eaa6cdab5cbbcba,
            mid_requireChar_28e2b11fb5ab282c,
            mid_setExplicitLuceneMatchVersion_f5dd97eebf6a215a,
            mid_defaultCtorException_f31696f7f5cdc481,
            mid_splitFileNames_49920ced44282529,
            mid_getLines_5d5edbdcf69ca866,
            mid_getSnowballWordSet_217561848cf06c5c,
            mid_splitAt_bc101e669f6246ba,
            mid_requireInt_fb5590135dc85728,
            mid_requireBoolean_5c6a59c9f13154e0,
            mid_requireFloat_9264a4c3c634b4c6,
            mid_getPattern_a25b3986085d9dd0,
            mid_getWordSet_217561848cf06c5c,
            mid_getBoolean_409ed0b09d0cc231,
            mid_getInt_1ac5bf052aeb6f67,
            mid_getFloat_761821ef6c91f9f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractAnalysisFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractAnalysisFactory(const AbstractAnalysisFactory& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *LUCENE_MATCH_VERSION_PARAM;

          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &) const;
          ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &, jboolean) const;
          jchar getChar(const ::java::util::Map &, const ::java::lang::String &, jchar) const;
          ::java::lang::String getClassArg() const;
          ::org::apache::lucene::util::Version getLuceneMatchVersion() const;
          ::java::util::Map getOriginalArgs() const;
          ::java::util::Set getSet(const ::java::util::Map &, const ::java::lang::String &) const;
          jboolean isExplicitLuceneMatchVersion() const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &) const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
          ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, jboolean) const;
          jchar requireChar(const ::java::util::Map &, const ::java::lang::String &) const;
          void setExplicitLuceneMatchVersion(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(AbstractAnalysisFactory);
        extern PyTypeObject *PY_TYPE(AbstractAnalysisFactory);

        class t_AbstractAnalysisFactory {
        public:
          PyObject_HEAD
          AbstractAnalysisFactory object;
          static PyObject *wrap_Object(const AbstractAnalysisFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
