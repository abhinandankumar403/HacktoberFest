#from django.contrib import admin
from django.urls import path
from . import views
from .views import (PostListView,
                    PostDetailView,PostCreateView,
                    PostUpdateView,PostDeleteView,
                    EventListView,EventCreateView
                    )
urlpatterns = [
    path('',PostListView.as_view() ,name='home'),
    path('active/event/',EventListView.as_view(),name='active-event'),
    path('create/event/',EventCreateView.as_view(),name='create-event'),
    path('post/<int:pk>/',PostDetailView.as_view() ,name='post-detail'),
    path('post/new/',PostCreateView.as_view() ,name='post-create'),
    path('post/<int:pk>/update/',PostUpdateView.as_view(),name='post-update'),
    path('post/<int:pk>/delete/',PostDeleteView.as_view(),name='post-delete'),
    path('teaminfo', views.team,name='teaminfo'),
]