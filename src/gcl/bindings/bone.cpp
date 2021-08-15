#include "gcl/bindings/bone.h"

namespace GCL::Bindings {

Bone::Bone(GrannyBone data, FbxNode* node, FbxSkeleton* skeleton)
    : m_data(data)
    , m_node(node)
    , m_skeleton(skeleton)
{
}

Bone::Bone(GrannyBone data)
    : m_data(data)
    , m_node(nullptr)
    , m_skeleton(nullptr)
{
}

Bone::Bone()
{
}

GrannyBone Bone::getData()
{
    return m_data;
}

FbxNode* Bone::getNode()
{
    return m_node;
}

FbxSkeleton* Bone::getSkeleton()
{
    return m_skeleton;
}

vector<FbxCluster*> Bone::getClusters()
{
    return m_clusters;
}

void Bone::setData(GrannyBone data)
{
    m_data = data;
}

void Bone::setNode(FbxNode* node)
{
    m_node = node;
}

void Bone::setSkeleton(FbxSkeleton* skeleton)
{
    m_skeleton = skeleton;
}

void Bone::addCluster(FbxCluster* cluster)
{
    m_clusters.push_back(cluster);
}

} // namespace GCL::Bindings
