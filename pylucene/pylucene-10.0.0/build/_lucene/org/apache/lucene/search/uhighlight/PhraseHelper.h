#ifndef org_apache_lucene_search_uhighlight_PhraseHelper_H
#define org_apache_lucene_search_uhighlight_PhraseHelper_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
      class Function;
    }
    class Collection;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class Boolean;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class PhraseHelper;
          class OffsetsEnum;
        }
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PhraseHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1add5dc504b59aba,
              mid_createOffsetsEnumsForSpans_c553aa59d95722a3,
              mid_getAllPositionInsensitiveTerms_cb1c5650e8bc510b,
              mid_getSpanQueries_79131c6bbcf08916,
              mid_hasPositionSensitivity_9aa4f33e82ea333f,
              mid_willRewrite_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseHelper(const PhraseHelper& obj) : ::java::lang::Object(obj) {}

            static PhraseHelper *NONE;

            PhraseHelper(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Predicate &, const ::java::util::function::Function &, const ::java::util::function::Function &, jboolean);

            void createOffsetsEnumsForSpans(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::util::List &) const;
            JArray< ::org::apache::lucene::util::BytesRef > getAllPositionInsensitiveTerms() const;
            ::java::util::Set getSpanQueries() const;
            jboolean hasPositionSensitivity() const;
            jboolean willRewrite() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(PhraseHelper);
          extern PyTypeObject *PY_TYPE(PhraseHelper);

          class t_PhraseHelper {
          public:
            PyObject_HEAD
            PhraseHelper object;
            static PyObject *wrap_Object(const PhraseHelper&);
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
