void ExclusionSTauSTauLsp2()
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
   3.739263,
   2.975884,
   2.983532,
   4.01359,
   2.79185,
   3.550298,
   4.138444,
   3.718658,
   6.233622,
   4.991934,
   4.996519,
   5.427591,
   5.85048,
   6.959128,
   7.529878,
   8.898993,
   8.712668,
   9.055785,
   10.67452,
   12.016};
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
   1.263817,
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
   1.019745,
   1.81632,
   1.402677,
   1.464064,
   1.339047,
   1.597832,
   2.033412,
   2.102903,
   3.227128,
   2.32065,
   2.475243,
   2.958817,
   3.51449};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,TwoSigmaBand_fx3001,TwoSigmaBand_fy3001,TwoSigmaBand_felx3001,TwoSigmaBand_fehx3001,TwoSigmaBand_fely3001,TwoSigmaBand_fehy3001);
   grae->SetName("TwoSigmaBand");
   grae->SetTitle("STauSTau");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineColor( kRed );
   grae->SetLineWidth(4);

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
   2.418602,
   1.926344,
   2.633813,
   2.896743,
   3.020764,
   4.742124,
   3.829083,
   3.930665,
   4.477473,
   4.599247,
   6.000636,
   6.176911,
   7.164406,
   7.187856,
   7.612455,
   9.625117,
   10.24726};
   TGraph *graph = new TGraph(20,Obs_fx1,Obs_fy1);
   graph->SetName("Obs");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(1);
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
   Double_t Expected_fy2[20] = {
   3.739263,
   2.975884,
   2.983532,
   4.01359,
   2.79185,
   3.550298,
   4.138444,
   3.718658,
   6.233622,
   4.991934,
   4.996519,
   5.427591,
   5.85048,
   6.959128,
   7.529878,
   8.898993,
   8.712668,
   9.055785,
   10.67452,
   12.016};
   graph = new TGraph(20,Expected_fx2,Expected_fy2);
   graph->SetName("Expected");
   graph->SetTitle("Graph");
   graph->SetFillColor(2);
   graph->SetLineWidth(4);
   graph->SetLineColor(2);
   
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
   
   Double_t Graph0_fx3[20] = {
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
   Double_t Graph0_fy3[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(20,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   //graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,91,319);
   Graph_Graph3->SetMinimum(0.9);
   Graph_Graph3->SetMaximum(2.1);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("cp");
   
   TLegend *leg = new TLegend(0.3318966,0.6898734,0.7112069,0.9008439,NULL,"brNDC");
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

   // ci = TColor::GetColor("#00ff00");
   // entry->SetFillColor(ci);
   // entry->SetFillStyle(1001);
   entry->SetLineColor(kRed);
   // entry->SetLineStyle(1);
   // entry->SetLineWidth(4);
   // entry->SetMarkerColor(kRed);
   // entry->SetMarkerStyle(21);
   // entry->SetMarkerSize(1);
   // entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(91.56716,22.34501,"");
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(91.56716,21.92252-3,"CMS Preliminary");
   tex->SetTextSize(0.04026846);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(104.6119,19.23256-3,"pp#rightarrow#tilde{#tau}#tilde{#tau} , #tilde{#tau}#rightarrow#tau_{h}#chi^{0}_{1}, m_{#chi^{0}_{1}}=1 GeV");
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(258.2,21.92252-3,"18.1 fb^{-1} (8 TeV)");
   tex->SetTextSize(0.03187919);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
