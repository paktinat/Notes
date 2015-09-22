void ExclusionSTauSTauLsp1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Sep 22 13:04:27 2015) by ROOT version6.02/04
   TCanvas *c1 = new TCanvas("c1", "c1",177,131,848,847);
   gStyle->SetOptTitle(0);
   c1->Range(51.37143,-3.802408,333.6571,24.1758);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.1403846);
   c1->SetRightMargin(0.05192308);
   c1->SetBottomMargin(0.135906);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t TwoSigmaBand_fx3001[20] = {
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
   Double_t TwoSigmaBand_fy3001[20] = {
   3.296875,
   2.476562,
   2.507812,
   3.453125,
   2.507812,
   3.359375,
   3.859375,
   3.640625,
   5.890625,
   4.734375,
   4.734375,
   5.359375,
   5.71875,
   6.90625,
   7.34375,
   8.71875,
   8.53125,
   8.953125,
   10.71875,
   12.03125};
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
   1.094691,
   0.8448753,
   0.8389287,
   1.16064,
   0.8358099,
   1.136332,
   1.300661,
   1.260325,
   2.05407,
   1.640878,
   1.640878,
   1.882315,
   2.001336,
   2.477771,
   2.597755,
   3.051217,
   3.017817,
   3.228253,
   3.845591,
   4.338141};
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
   1.800384,
   1.451138,
   1.409471,
   1.913238,
   1.369486,
   1.914857,
   2.138325,
   2.176753,
   3.522042,
   2.830713,
   2.830713,
   3.204405,
   3.419277,
   4.34952,
   4.507965,
   5.212996,
   5.236913,
   5.567256,
   6.921515,
   7.577219};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,TwoSigmaBand_fx3001,TwoSigmaBand_fy3001,TwoSigmaBand_felx3001,TwoSigmaBand_fehx3001,TwoSigmaBand_fely3001,TwoSigmaBand_fehy3001);
   grae->SetName("TwoSigmaBand");
   grae->SetTitle("STauSTau");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_TwoSigmaBand3001 = new TH1F("Graph_TwoSigmaBand3001","STauSTau",100,91,319);
   Graph_TwoSigmaBand3001->SetMinimum(0);
   Graph_TwoSigmaBand3001->SetMaximum(21.40615);
   Graph_TwoSigmaBand3001->SetDirectory(0);
   Graph_TwoSigmaBand3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_TwoSigmaBand3001->SetLineColor(ci);
   Graph_TwoSigmaBand3001->GetXaxis()->SetTitle("m_{#tilde{#tau}} [GeV]");
   Graph_TwoSigmaBand3001->GetXaxis()->SetLabelFont(42);
   Graph_TwoSigmaBand3001->GetXaxis()->SetLabelSize(0.05);
   Graph_TwoSigmaBand3001->GetXaxis()->SetTitleSize(0.05);
   Graph_TwoSigmaBand3001->GetXaxis()->SetTitleFont(42);
   Graph_TwoSigmaBand3001->GetYaxis()->SetTitle("#sigma_{upper limit} / #sigma_{pp #rightarrow #tilde{#tau} #tilde{#tau}}");
   Graph_TwoSigmaBand3001->GetYaxis()->SetLabelFont(42);
   Graph_TwoSigmaBand3001->GetYaxis()->SetLabelSize(0.05);
   Graph_TwoSigmaBand3001->GetYaxis()->SetTitleSize(0.05);
   Graph_TwoSigmaBand3001->GetYaxis()->SetTitleOffset(1.24);
   Graph_TwoSigmaBand3001->GetYaxis()->SetTitleFont(42);
   Graph_TwoSigmaBand3001->GetZaxis()->SetLabelFont(42);
   Graph_TwoSigmaBand3001->GetZaxis()->SetLabelSize(0.035);
   Graph_TwoSigmaBand3001->GetZaxis()->SetTitleSize(0.035);
   Graph_TwoSigmaBand3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_TwoSigmaBand3001);
   
   grae->Draw("ap3");
   
   Double_t Obs_fx1[20] = {
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
   Double_t Obs_fy1[20] = {
   2.67937,
   2.074351,
   2.074351,
   2.794611,
   2.01673,
   2.70818,
   3.111526,
   2.967474,
   4.782531,
   3.831787,
   3.831787,
   4.350374,
   4.638479,
   5.675654,
   5.992569,
   7.087365,
   6.943313,
   7.317848,
   8.873612,
   9.824356};
   TGraph *graph = new TGraph(20,Obs_fx1,Obs_fy1);
   graph->SetName("Obs");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Obs1 = new TH1F("Graph_Obs1","Graph",100,91,319);
   Graph_Obs1->SetMinimum(1.229018);
   Graph_Obs1->SetMaximum(10.602);
   Graph_Obs1->SetDirectory(0);
   Graph_Obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Obs1->SetLineColor(ci);
   Graph_Obs1->GetXaxis()->SetLabelFont(42);
   Graph_Obs1->GetXaxis()->SetLabelSize(0.035);
   Graph_Obs1->GetXaxis()->SetTitleSize(0.035);
   Graph_Obs1->GetXaxis()->SetTitleFont(42);
   Graph_Obs1->GetYaxis()->SetLabelFont(42);
   Graph_Obs1->GetYaxis()->SetLabelSize(0.035);
   Graph_Obs1->GetYaxis()->SetTitleSize(0.035);
   Graph_Obs1->GetYaxis()->SetTitleFont(42);
   Graph_Obs1->GetZaxis()->SetLabelFont(42);
   Graph_Obs1->GetZaxis()->SetLabelSize(0.035);
   Graph_Obs1->GetZaxis()->SetTitleSize(0.035);
   Graph_Obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Obs1);
   
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
   3.457251,
   2.535317,
   3.37082,
   3.860597,
   3.658924,
   5.906137,
   4.75372,
   4.75372,
   5.38755,
   5.733275,
   6.914502,
   7.346659,
   8.729559,
   8.556697,
   8.960043,
   10.74629,
   12.04276};
   graph = new TGraph(20,Expected_fx2,Expected_fy2);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(4);
   
   TH1F *Graph_Expected2 = new TH1F("Graph_Expected2","Graph",100,91,319);
   Graph_Expected2->SetMinimum(1.521094);
   Graph_Expected2->SetMaximum(12.98672);
   Graph_Expected2->SetDirectory(0);
   Graph_Expected2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Expected2->SetLineColor(ci);
   Graph_Expected2->GetXaxis()->SetLabelFont(42);
   Graph_Expected2->GetXaxis()->SetLabelSize(0.035);
   Graph_Expected2->GetXaxis()->SetTitleSize(0.035);
   Graph_Expected2->GetXaxis()->SetTitleFont(42);
   Graph_Expected2->GetYaxis()->SetLabelFont(42);
   Graph_Expected2->GetYaxis()->SetLabelSize(0.035);
   Graph_Expected2->GetYaxis()->SetTitleSize(0.035);
   Graph_Expected2->GetYaxis()->SetTitleFont(42);
   Graph_Expected2->GetZaxis()->SetLabelFont(42);
   Graph_Expected2->GetZaxis()->SetLabelSize(0.035);
   Graph_Expected2->GetZaxis()->SetTitleSize(0.035);
   Graph_Expected2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Expected2);
   
   graph->Draw("c");
   TLine *line = new TLine(91,1,319,1);
   line->SetLineStyle(7);
   line->Draw();
   
   TLegend *leg = new TLegend(0.1653846,0.6543624,0.5461538,0.8590604,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Obs","Observed","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TwoSigmaBand","Expected #pm 1 #sigma","fl");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(91.56716,22.34501,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(91.56716,21.92252,"CMS Preliminary");
   tex->SetTextSize(0.04026846);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(104.6119,20.23256,"pp#rightarrow#tilde{#tau}#tilde{#tau} , #tilde{#tau}#rightarrow#tau_{h}#chi^{0}_{1}, m_{#chi^{0}_{1}}=1 GeV");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(258.2,21.92252,"18.1 fb^{-1} (8 TeV)");
   tex->SetTextSize(0.03187919);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
