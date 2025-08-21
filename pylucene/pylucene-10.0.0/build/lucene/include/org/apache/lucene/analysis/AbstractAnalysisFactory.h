#ifndef org_apache_lucene_analysis_AbstractAnalysisFactory_H
#define org_apache_lucene_analysis_AbstractAnalysisFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    class Map;
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
            mid_get_fdb4de21497aa8f2,
            mid_get_4352542d9b5a4fee,
            mid_get_7b130275ab486b81,
            mid_get_9f884d509857227f,
            mid_get_86228c91ea8fbd9c,
            mid_getChar_2f7bae9c14416b42,
            mid_getClassArg_09a7afff1868fc5e,
            mid_getLuceneMatchVersion_f03381109b44c46a,
            mid_getOriginalArgs_f125f26c07a7bec8,
            mid_getSet_98cc1328995e1a91,
            mid_isExplicitLuceneMatchVersion_947277eca0748c4e,
            mid_require_fdb4de21497aa8f2,
            mid_require_7b130275ab486b81,
            mid_require_d36d41c2931b8c36,
            mid_requireChar_23ba1550b2dc97b7,
            mid_setExplicitLuceneMatchVersion_b110fc3a58c081ab,
            mid_defaultCtorException_1bcba9450a5e7093,
            mid_splitFileNames_8eaa545bb5a79de3,
            mid_splitAt_8fa5826244c60eb9,
            mid_requireInt_3e09bd3cedeb0e6d,
            mid_requireBoolean_9ade08fa98e7a30d,
            mid_requireFloat_fcf82085ba9171a2,
            mid_getPattern_9512c3e35be4ff66,
            mid_getWordSet_926ad1e72660294d,
            mid_getSnowballWordSet_926ad1e72660294d,
            mid_getLines_f9cbff32ceb33fb6,
            mid_getBoolean_b26648999f7b14b8,
            mid_getInt_42804bc9b1df6d42,
            mid_getFloat_5b2abd1e2abadbec,
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
