#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocs$SuggestScoreDoc_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocs$SuggestScoreDoc_H

#include "org/apache/lucene/search/ScoreDoc.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocs$SuggestScoreDoc;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class TopSuggestDocs$SuggestScoreDoc : public ::org::apache::lucene::search::ScoreDoc {
             public:
              enum {
                mid_init$_71bd587f44f798d5,
                mid_compareTo_db0308377151db38,
                mid_equals_570b5248a6da3ef6,
                mid_hashCode_20fbf7565993c3d7,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              enum {
                fid_context,
                fid_key,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopSuggestDocs$SuggestScoreDoc(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopSuggestDocs$SuggestScoreDoc(const TopSuggestDocs$SuggestScoreDoc& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

              ::java::lang::CharSequence _get_context() const;
              ::java::lang::CharSequence _get_key() const;

              TopSuggestDocs$SuggestScoreDoc(jint, const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat);

              jint compareTo(const TopSuggestDocs$SuggestScoreDoc &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              ::java::lang::String toString() const;
            };
          }
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
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(TopSuggestDocs$SuggestScoreDoc);
            extern PyTypeObject *PY_TYPE(TopSuggestDocs$SuggestScoreDoc);

            class t_TopSuggestDocs$SuggestScoreDoc {
            public:
              PyObject_HEAD
              TopSuggestDocs$SuggestScoreDoc object;
              static PyObject *wrap_Object(const TopSuggestDocs$SuggestScoreDoc&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
