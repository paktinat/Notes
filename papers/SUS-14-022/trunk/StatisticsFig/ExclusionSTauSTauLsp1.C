void ExclusionSTauSTauLsp1()
{
//=========Macro generated from canvas: ExclusionSTauSTauLsp1/ExclusionSTauSTauLsp1
//=========  (Tue Jul 19 16:31:56 2016) by ROOT version6.07/07
   TCanvas *ExclusionSTauSTauLsp1 = new TCanvas("ExclusionSTauSTauLsp1", "ExclusionSTauSTauLsp1",0,45,1105,679);
//   TCanvas *ExclusionSTauSTauLsp1 = new TCanvas("ExclusionSTauSTauLsp1", "ExclusionSTauSTauLsp1",177,131,848,847);
   gStyle->SetOptTitle(0);
   ExclusionSTauSTauLsp1->Range(4.446029,-3.052129,366.7901,22.80848);
   //   ExclusionSTauSTauLsp1->Range(51.37143,-3.802408,333.6571,24.1758);
   ExclusionSTauSTauLsp1->SetFillColor(0);
   ExclusionSTauSTauLsp1->SetBorderMode(0);
   ExclusionSTauSTauLsp1->SetBorderSize(2);
   ExclusionSTauSTauLsp1->SetLeftMargin(0.2892112);
   ExclusionSTauSTauLsp1->SetRightMargin(0.1822303);
   ExclusionSTauSTauLsp1->SetTopMargin(0.05422648);
   ExclusionSTauSTauLsp1->SetBottomMargin(0.1180223);
   ExclusionSTauSTauLsp1->SetFrameBorderMode(0);
   ExclusionSTauSTauLsp1->SetFrameBorderMode(0);
   
   Double_t TwoSigmaBand_fx3001[20] = {
   109.9329,
   119.6007,
   129.6714,
   139.742,
   149.8127,
   159.8834,
   169.5512,
   179.6219,
   189.6926,
   199.7633,
   209.8339,
   219.5018,
   229.5724,
   239.6431,
   249.7138,
   259.7845,
   269.4523,
   279.523,
   289.5936,
   299.6643};
   Double_t TwoSigmaBand_fy3001[20] = {
   3.851485,
   3.081188,
   3.12173,
   3.162272,
   2.91902,
   3.648776,
   4.256905,
   3.851485,
   4.702866,
   5.108286,
   5.108286,
   5.554247,
   5.959667,
   7.094841,
   7.621887,
   8.635435,
   8.838145,
   9.162481,
   10.78416,
   12.12204};
   Double_t TwoSigmaBand_felx3001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t TwoSigmaBand_fely3001[20] = {
   1.739755,
   1.621687,
   1.809748,
   1.825452,
   1.302321,
   1.687202,
   2.104276,
   1.769249,
   2.496864,
   2.092553,
   2.176961,
   2.70937,
   2.369431,
   3.383794,
   3.618713,
   4.350183,
   3.910419,
   4.26718,
   4.300303,
   6.240278};
   Double_t TwoSigmaBand_fehx3001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t TwoSigmaBand_fehy3001[20] = {
   1.088921,
   0.8873882,
   0.8840535,
   1.196912,
   0.8405106,
   0.9121749,
   1.297044,
   1.634516,
   1.81632,
   1.402677,
   1.464064,
   1.339047,
   1.597832,
   2.033412,
   2.102903,
   2.322365,
   2.32065,
   2.475243,
   2.958817,
   3.51449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,TwoSigmaBand_fx3001,TwoSigmaBand_fy3001,TwoSigmaBand_felx3001,TwoSigmaBand_fehx3001,TwoSigmaBand_fely3001,TwoSigmaBand_fehy3001);
   grae->SetName("TwoSigmaBand");
   grae->SetTitle("STauSTau");
   grae->SetFillColor(3);
   grae->SetLineColor(2);
   grae->SetLineWidth(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001","STauSTau",100,91,319);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->SetMaximum(21.40615);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetTitle("m_{#tilde{#tau}} (GeV)");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetTitleOffset(1.03);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetTitle("95% CL upper limit on  #sigma / #sigma_{pp #rightarrow #tilde{#tau}#tilde{#tau}}");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_TwoSigmaBand30013001300130013001300130023001300230013001);
   
   grae->Draw("ap4");
   
   Double_t Obs_fx1[20] = {
   110,
   120,
   130,
   140,
   150,
   160,
   170,
   180,
   190,
   200,
   210,
   220,
   230,
   240,
   250,
   260,
   270,
   280,
   290,
   300};
   Double_t Obs_fy1[20] = {
   2.597703,
   1.912218,
   1.935903,
   2.02768,
   1.926344,
   2.633813,
   2.896743,
   3.020764,
   3.59617,
   3.829083,
   3.930665,
   4.477473,
   4.599247,
   6.000636,
   6.176911,
   7.016503,
   7.187856,
   7.612455,
   9.625117,
   10.24726};
   TGraph *graph = new TGraph(20,Obs_fx1,Obs_fy1);
   graph->SetName("Obs");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311","Graph",100,91,319);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->SetMinimum(1.229018);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->SetMaximum(10.602);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Obs11111131311);
   
   graph->Draw("c");
   
   Double_t Expected_fx2[20] = {
   109.9451,
   119.9942,
   129.8786,
   139.9277,
   149.9769,
   159.8613,
   169.9104,
   179.9595,
   189.8439,
   199.8931,
   209.9422,
   219.9913,
   229.8757,
   239.9249,
   249.974,
   259.8584,
   269.9075,
   279.9566,
   289.841,
   299.8902};
   Double_t Expected_fy2[20] = {
   3.313199,
   2.477697,
   2.535317,
   2.662083,
   2.535317,
   3.37082,
   3.860597,
   3.658924,
   4.416638,
   4.75372,
   4.75372,
   5.38755,
   5.733275,
   6.914502,
   7.346659,
   8.349262,
   8.556697,
   8.960043,
   10.74629,
   12.04276};
   graph = new TGraph(20,Expected_fx2,Expected_fy2);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(4);
   graph->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422","Graph",100,91,319);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->SetMinimum(1.521094);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->SetMaximum(12.98672);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->SetStats(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->SetLineColor(2);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Expected22222242422);
   
   graph->Draw("c");
   TLine *line = new TLine(110,1,300,1);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.3291024,0.6515152,0.7107888,0.8572568,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.0400641);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Obs","Observed","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TwoSigmaBand","Expected #pm1 #sigma","fl");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(91.51312,22.37303,"");
   tex->SetTextSize(0.006144393);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(109.5784,21.94233,"CMS");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04026846);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(129.0524,19.67386,"pp#rightarrow#tilde{#tau}#tilde{#tau} , #tilde{#tau}#rightarrow#tau_{h}#chi^{0}_{1}, m_{#chi^{0}_{1}}= 1 GeV");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(245.5707,21.94233,"18.1 fb^{-1} (8 TeV)");
   tex->SetTextFont(42);
   tex->SetTextSize(0.0400641);
   tex->SetLineWidth(2);
   tex->Draw();
   ExclusionSTauSTauLsp1->Modified();
   ExclusionSTauSTauLsp1->cd();
   ExclusionSTauSTauLsp1->SetSelected(ExclusionSTauSTauLsp1);
   ExclusionSTauSTauLsp1->ToggleToolBar();
   ExclusionSTauSTauLsp1->SaveAs("ExclusionSTauSTauLsp1.pdf");
   ExclusionSTauSTauLsp1->SaveAs("ExclusionSTauSTauLsp1.png");
}
