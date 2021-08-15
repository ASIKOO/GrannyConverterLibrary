#pragma once

#include "gcl/bindings/bone.h"
#include "gcl/importer/grannyformat.h"

#include <fbxsdk.h>

#include <vector>

namespace GCL::Bindings {

using namespace std;

///
/// \brief Binding of granny skeleton data and the counterpart fbx node.
///
class Skeleton {
public:
    ///
    /// \brief Constructer
    /// \param data Granny data of the skeleton.
    ///
    Skeleton(GrannySkeleton* data);

    ///
    /// \brief Returns the granny skeleton data.
    /// \return Granny skeleton data
    ///
    GrannySkeleton* getData();

    ///
    /// \brief Returns the fbx node of the skeleton.
    /// \return Fbx skeleton node
    ///
    FbxNode* getNode();

    ///
    /// \brief Sets the granny skeleton data.
    /// \param data Granny skeleton data
    ///
    void setData(GrannySkeleton* data);

    ///
    /// \brief Sets the fbx node of the skeleton.
    /// \param node
    ///
    void setNode(FbxNode* node);

    ///
    /// \brief getBones
    /// \return Returns all bones of the skeleton.
    ///
    vector<Bone::SharedPtr> getBones();

    ///
    /// \brief Set bones of the skeleton.
    /// \param Bones
    ///
    void setBones(vector<Bone::SharedPtr> bones);

protected:
    ///
    /// \brief Granny data of the skeleton.
    ///
    GrannySkeleton* m_data = nullptr;

    ///
    /// \brief Fbx node of the skeleton.
    ///
    FbxNode* m_node = nullptr;

    ///
    /// \brief Bones of the skeleton.
    ///
    vector<Bone::SharedPtr> m_bones;
};

} // namespace GCL::Bindings
