void EstimationResults_MT2_tauMTgt200_DDFake()
{
//=========Macro generated from canvas: MT2_ratio_AllSUSYc_ratio_MT2_Total200.000000_fromMuTau/
//=========  (Wed Feb 24 18:08:36 2016) by ROOT version6.02/04
   TCanvas *MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau = new TCanvas("MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau", "",152,169,600,600);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetHighLightColor(2);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->Range(0,0,1,1);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetFillColor(0);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetBorderMode(0);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetBorderSize(2);
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau
   TPad *MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau = new TPad("MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau", "Pad containing the overlay plot",0,0.211838,1,1);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->Draw();
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->cd();
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->Range(-31.74902,-2.524152,437.5434,2.605149);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetFillColor(0);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetFillStyle(4000);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetBorderMode(0);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetBorderSize(2);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetLogy();
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetLeftMargin(0.131579);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetRightMargin(0.08);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetTopMargin(0.06895515);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetBottomMargin(0.07206074);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetFrameBorderMode(0);
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->SetFrameBorderMode(0);
   
   THStack *Total200_000000_fromMuTau_MT2 = new THStack();
   Total200_000000_fromMuTau_MT2->SetName("Total200_000000_fromMuTau_MT2");
   Total200_000000_fromMuTau_MT2->SetTitle("");
   Total200_000000_fromMuTau_MT2->SetMinimum(0.02);
   Total200_000000_fromMuTau_MT2->SetMaximum(102.4328);
   
   TH1F *Total200_000000_fromMuTau_MT2_stack_1 = new TH1F("Total200_000000_fromMuTau_MT2_stack_1","",5,30,400);
   Total200_000000_fromMuTau_MT2_stack_1->SetMinimum(0.007005979);
   Total200_000000_fromMuTau_MT2_stack_1->SetMaximum(178.4258);
   Total200_000000_fromMuTau_MT2_stack_1->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Total200_000000_fromMuTau_MT2_stack_1->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_stack_1->GetXaxis()->SetTitle("MT2");
   Total200_000000_fromMuTau_MT2_stack_1->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_stack_1->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_stack_1->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_stack_1->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetTitle("Events");
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetLabelSize(0.05);
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetTitleSize(0.05);
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetTitleOffset(1.3);
   Total200_000000_fromMuTau_MT2_stack_1->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_stack_1->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_stack_1->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_stack_1->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_stack_1->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->SetHistogram(Total200_000000_fromMuTau_MT2_stack_1);
   
   Double_t xAxis1[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_QCD1 = new TH1D("Total200_000000_fromMuTau_MT2_QCD1","",5, xAxis1);
   Total200_000000_fromMuTau_MT2_QCD1->SetEntries(4);
   Total200_000000_fromMuTau_MT2_QCD1->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_QCD1->SetStats(0);

   ci = TColor::GetColor("#cccc00");
   Total200_000000_fromMuTau_MT2_QCD1->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   Total200_000000_fromMuTau_MT2_QCD1->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_QCD1->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   Total200_000000_fromMuTau_MT2_QCD1->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_QCD1->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_QCD1->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_QCD1->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_QCD1->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_QCD1->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_QCD1->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_QCD1->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_QCD1,"");
   Double_t xAxis2[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_W2 = new TH1D("Total200_000000_fromMuTau_MT2_W2","",5, xAxis2);
   Total200_000000_fromMuTau_MT2_W2->SetBinContent(1,23.87723);
   Total200_000000_fromMuTau_MT2_W2->SetBinContent(2,6.341707);
   Total200_000000_fromMuTau_MT2_W2->SetBinContent(3,22.59064);
   Total200_000000_fromMuTau_MT2_W2->SetBinContent(4,10.91189);
   Total200_000000_fromMuTau_MT2_W2->SetBinContent(5,1.285645);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(0,4.510699);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(1,5.054547);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(2,2.534919);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(3,5.433528);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(4,3.003567);
   Total200_000000_fromMuTau_MT2_W2->SetBinError(5,0.6212025);
   Total200_000000_fromMuTau_MT2_W2->SetEntries(114);
   Total200_000000_fromMuTau_MT2_W2->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_W2->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   Total200_000000_fromMuTau_MT2_W2->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   Total200_000000_fromMuTau_MT2_W2->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_W2->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   Total200_000000_fromMuTau_MT2_W2->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_W2->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_W2->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_W2->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_W2->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_W2->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_W2->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_W2->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_W2,"");
   Double_t xAxis3[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_ZX3 = new TH1D("Total200_000000_fromMuTau_MT2_ZX3","",5, xAxis3);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinContent(1,0.0009098457);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinContent(3,0.01018414);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinContent(4,0.007407344);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinContent(5,0.1903638);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinError(0,0.000872806);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinError(1,0.000872806);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinError(3,0.00959694);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinError(4,0.007407344);
   Total200_000000_fromMuTau_MT2_ZX3->SetBinError(5,0.04357529);
   Total200_000000_fromMuTau_MT2_ZX3->SetEntries(35);
   Total200_000000_fromMuTau_MT2_ZX3->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_ZX3->SetStats(0);

   ci = TColor::GetColor("#006600");
   Total200_000000_fromMuTau_MT2_ZX3->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   Total200_000000_fromMuTau_MT2_ZX3->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_ZX3->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   Total200_000000_fromMuTau_MT2_ZX3->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_ZX3->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_ZX3->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_ZX3->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_ZX3->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_ZX3->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_ZX3->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_ZX3->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_ZX3,"");
   Double_t xAxis4[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_Top4 = new TH1D("Total200_000000_fromMuTau_MT2_Top4","",5, xAxis4);
   Total200_000000_fromMuTau_MT2_Top4->SetBinContent(1,0.2165999);
   Total200_000000_fromMuTau_MT2_Top4->SetBinContent(3,1.83785);
   Total200_000000_fromMuTau_MT2_Top4->SetBinError(0,0.2152693);
   Total200_000000_fromMuTau_MT2_Top4->SetBinError(1,0.2152693);
   Total200_000000_fromMuTau_MT2_Top4->SetBinError(3,1.161517);
   Total200_000000_fromMuTau_MT2_Top4->SetEntries(9);
   Total200_000000_fromMuTau_MT2_Top4->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_Top4->SetStats(0);

   ci = TColor::GetColor("#3366cc");
   Total200_000000_fromMuTau_MT2_Top4->SetFillColor(ci);

   ci = TColor::GetColor("#3366cc");
   Total200_000000_fromMuTau_MT2_Top4->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_Top4->SetLineWidth(2);

   ci = TColor::GetColor("#3366cc");
   Total200_000000_fromMuTau_MT2_Top4->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_Top4->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Top4->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_Top4->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Top4->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_Top4->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Top4->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Top4->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_Top4,"");
   Double_t xAxis5[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_WW5 = new TH1D("Total200_000000_fromMuTau_MT2_WW5","",5, xAxis5);
   Total200_000000_fromMuTau_MT2_WW5->SetBinContent(1,0.250828);
   Total200_000000_fromMuTau_MT2_WW5->SetBinContent(2,0.1136218);
   Total200_000000_fromMuTau_MT2_WW5->SetBinContent(4,0.06146193);
   Total200_000000_fromMuTau_MT2_WW5->SetBinContent(5,0.02362514);
   Total200_000000_fromMuTau_MT2_WW5->SetBinError(0,0.1062821);
   Total200_000000_fromMuTau_MT2_WW5->SetBinError(1,0.1076675);
   Total200_000000_fromMuTau_MT2_WW5->SetBinError(2,0.08034274);
   Total200_000000_fromMuTau_MT2_WW5->SetBinError(4,0.06146193);
   Total200_000000_fromMuTau_MT2_WW5->SetBinError(5,0.02362514);
   Total200_000000_fromMuTau_MT2_WW5->SetEntries(14);
   Total200_000000_fromMuTau_MT2_WW5->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_WW5->SetStats(0);

   ci = TColor::GetColor("#000066");
   Total200_000000_fromMuTau_MT2_WW5->SetFillColor(ci);

   ci = TColor::GetColor("#000066");
   Total200_000000_fromMuTau_MT2_WW5->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_WW5->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   Total200_000000_fromMuTau_MT2_WW5->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_WW5->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_WW5->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_WW5->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_WW5->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_WW5->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_WW5->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_WW5->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_WW5,"");
   Double_t xAxis6[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_Higgs6 = new TH1D("Total200_000000_fromMuTau_MT2_Higgs6","",5, xAxis6);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinContent(1,0.07679207);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinContent(2,0.02162796);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinContent(3,0.04353305);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinContent(4,0.01639062);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinContent(5,0.06703498);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(0,0.02991632);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(1,0.03045227);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(2,0.01255039);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(3,0.0168871);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(4,0.009542845);
   Total200_000000_fromMuTau_MT2_Higgs6->SetBinError(5,0.019576);
   Total200_000000_fromMuTau_MT2_Higgs6->SetEntries(41);
   Total200_000000_fromMuTau_MT2_Higgs6->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_Higgs6->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Total200_000000_fromMuTau_MT2_Higgs6->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   Total200_000000_fromMuTau_MT2_Higgs6->SetLineColor(ci);
   Total200_000000_fromMuTau_MT2_Higgs6->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Total200_000000_fromMuTau_MT2_Higgs6->SetMarkerColor(ci);
   Total200_000000_fromMuTau_MT2_Higgs6->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Higgs6->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_Higgs6->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Higgs6->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_Higgs6->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_Higgs6->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_Higgs6->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2->Add(Total200_000000_fromMuTau_MT2_Higgs6,"");
   Total200_000000_fromMuTau_MT2->Draw("hist");
   Double_t xAxis7[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *h2_copy7 = new TH1D("h2_copy7","",5, xAxis7);
   h2_copy7->SetBinContent(1,40.97312*1.21);
   h2_copy7->SetBinContent(2,2.596472*1.21);
   h2_copy7->SetBinContent(3,28.54152*1.21);
   h2_copy7->SetBinContent(4,8.359853*1.21);
   h2_copy7->SetBinContent(5,2.734164*1.21);
   h2_copy7->SetBinError(0,8.705188);
   h2_copy7->SetBinError(1,11.7);
   h2_copy7->SetBinError(2,4.47);
   h2_copy7->SetBinError(3,10.27);
   h2_copy7->SetBinError(4,6.16);
   h2_copy7->SetBinError(5,3.36);
   h2_copy7->SetMaximum(102.4328);
   h2_copy7->SetEntries(194);
   h2_copy7->SetDirectory(0);
   h2_copy7->SetStats(0);

   h2_copy7->SetLineColor(kBlack);
   h2_copy7->SetLineWidth(2);
   h2_copy7->SetMarkerStyle(20);
   h2_copy7->GetXaxis()->SetLabelFont(42);
   h2_copy7->GetXaxis()->SetLabelSize(0.035);
   h2_copy7->GetXaxis()->SetTitleSize(0.035);
   h2_copy7->GetXaxis()->SetTitleFont(42);
   h2_copy7->GetYaxis()->SetLabelFont(42);
   h2_copy7->GetYaxis()->SetLabelSize(0.035);
   h2_copy7->GetYaxis()->SetTitleSize(0.035);
   h2_copy7->GetYaxis()->SetTitleFont(42);
   h2_copy7->GetZaxis()->SetLabelFont(42);
   h2_copy7->GetZaxis()->SetLabelSize(0.035);
   h2_copy7->GetZaxis()->SetTitleSize(0.035);
   h2_copy7->GetZaxis()->SetTitleFont(42);
   h2_copy7->Draw("sameE");
   Double_t xAxis8[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *Total200_000000_fromMuTau_MT2_SUSY_380_18 = new TH1D("Total200_000000_fromMuTau_MT2_SUSY_380_18","",5, xAxis8);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->SetDirectory(0);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->SetStats(0);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->SetFillStyle(0);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->SetLineWidth(4);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->SetMarkerStyle(20);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetYaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetYaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT2_SUSY_380_18->Draw("samehist");
   TLatex *   tex = new TLatex(0.13,0.943,"");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.68,0.943,"#sqrt{s} = 8 TeV, L = 19.60 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Total200_000000_fromMuTau_MT29 = new TH1F("Total200_000000_fromMuTau_MT29","",5,30,400);
   Total200_000000_fromMuTau_MT29->SetMinimum(0.007005979);
   Total200_000000_fromMuTau_MT29->SetMaximum(178.4258);
   Total200_000000_fromMuTau_MT29->SetDirectory(0);
   Total200_000000_fromMuTau_MT29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Total200_000000_fromMuTau_MT29->SetLineColor(ci);
   Total200_000000_fromMuTau_MT29->GetXaxis()->SetTitle("MT2");
   Total200_000000_fromMuTau_MT29->GetXaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT29->GetXaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT29->GetXaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT29->GetXaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetTitle("Events");
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetLabelSize(0.05);
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetTitleSize(0.05);
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetTitleOffset(1.3);
   Total200_000000_fromMuTau_MT29->GetYaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT29->GetZaxis()->SetLabelFont(42);
   Total200_000000_fromMuTau_MT29->GetZaxis()->SetLabelSize(0.035);
   Total200_000000_fromMuTau_MT29->GetZaxis()->SetTitleSize(0.035);
   Total200_000000_fromMuTau_MT29->GetZaxis()->SetTitleFont(42);
   Total200_000000_fromMuTau_MT29->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.71,0.61,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_QCD","QCD","f");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_W","W","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_ZX","ZX","f");

   ci = TColor::GetColor("#006600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_Top","Top","f");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3366cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_WW","WW","f");

   ci = TColor::GetColor("#000066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_Higgs","Higgs","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);

   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_SUSY_380_1","SMS","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);


   entry=leg->AddEntry("Total200_000000_fromMuTau_MT2_data","data","l");
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   MT2_ratio_AllSUSY_plotpad_MT2_Total200_000000_fromMuTau->Modified();
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->cd();
  
// ------------>Primitives in pad: MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau
   TPad *MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau = new TPad("MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau", "Pad containing the ratio",0,0.01863354,0.9967105,0.2189441);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->Draw();
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->cd();
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->Range(-32.49611,-0.8571431,435.0673,2.214286);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetFillColor(0);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetBorderMode(0);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetBorderSize(2);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetLeftMargin(0.1336634);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetRightMargin(0.075);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetTopMargin(0.06976745);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetBottomMargin(0.2790698);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetFrameBorderMode(0);
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->SetFrameBorderMode(0);
   Double_t xAxis9[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *h1_copy10 = new TH1D("h1_copy10","",5, xAxis9);
   h1_copy10->SetBinContent(1,1);
   h1_copy10->SetBinContent(2,1);
   h1_copy10->SetBinContent(3,1);
   h1_copy10->SetBinContent(4,1);
   h1_copy10->SetBinContent(5,1);
   h1_copy10->SetBinError(1,0.2930282);
   h1_copy10->SetBinError(2,0.5537727);
   h1_copy10->SetBinError(3,0.3209607);
   h1_copy10->SetBinError(4,0.3863372);
   h1_copy10->SetBinError(5,0.5628121);
   h1_copy10->SetMinimum(0);
   h1_copy10->SetMaximum(3);
   h1_copy10->SetEntries(25.99943);
   h1_copy10->SetDirectory(0);
   h1_copy10->SetStats(0);
   h1_copy10->SetFillColor(1);
   h1_copy10->SetFillStyle(3001);
   h1_copy10->SetLineColor(ci);
   h1_copy10->SetLineWidth(2);
   h1_copy10->SetMarkerColor(ci);
   h1_copy10->GetXaxis()->SetTitle("MT2");
   h1_copy10->GetXaxis()->SetLabelFont(42);
   h1_copy10->GetXaxis()->SetLabelSize(0);
   h1_copy10->GetXaxis()->SetTitleSize(0.2);
   h1_copy10->GetXaxis()->SetTickLength(0.09);
   h1_copy10->GetXaxis()->SetTitleOffset(0.5);
   h1_copy10->GetXaxis()->SetTitleFont(42);
   h1_copy10->GetYaxis()->SetTitle("Data / MC");
   h1_copy10->GetYaxis()->SetNdivisions(4);
   h1_copy10->GetYaxis()->SetLabelFont(42);
   h1_copy10->GetYaxis()->SetLabelSize(0.19);
   h1_copy10->GetYaxis()->SetTitleSize(0.18);
   h1_copy10->GetYaxis()->SetTitleOffset(0.36);
   h1_copy10->GetYaxis()->SetTitleFont(42);
   h1_copy10->GetZaxis()->SetLabelFont(42);
   h1_copy10->GetZaxis()->SetLabelSize(0.035);
   h1_copy10->GetZaxis()->SetTitleSize(0.035);
   h1_copy10->GetZaxis()->SetTitleFont(42);
   h1_copy10->Draw("E2");
   Double_t xAxis10[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *h2_copy11 = new TH1D("h2_copy11","",5, xAxis10);
   h2_copy11->SetBinContent(1,1.677689*1.21);
   h2_copy11->SetBinContent(2,0.4008784*1.21);
   h2_copy11->SetBinContent(3,1.165807*1.21);
   h2_copy11->SetBinContent(4,0.7601834*1.21);
   h2_copy11->SetBinContent(5,1.745209*1.21);
   h2_copy11->SetBinError(1,0.64);
   h2_copy11->SetBinError(2,0.71);
   h2_copy11->SetBinError(3,0.53);
   h2_copy11->SetBinError(4,0.62);
   h2_copy11->SetBinError(5,2.3);
   h2_copy11->SetMinimum(0.4);
   h2_copy11->SetMaximum(3);
   h2_copy11->SetEntries(7.023559);
   h2_copy11->SetDirectory(0);
   h2_copy11->SetStats(0);

   h2_copy11->SetLineColor(kBlack);
   h2_copy11->SetLineWidth(2);
   h2_copy11->SetMarkerStyle(20);
   h2_copy11->GetXaxis()->SetLabelFont(42);
   h2_copy11->GetXaxis()->SetLabelSize(0.035);
   h2_copy11->GetXaxis()->SetTitleSize(0.035);
   h2_copy11->GetXaxis()->SetTitleFont(42);
   h2_copy11->GetYaxis()->SetLabelFont(42);
   h2_copy11->GetYaxis()->SetLabelSize(0.035);
   h2_copy11->GetYaxis()->SetTitleSize(0.035);
   h2_copy11->GetYaxis()->SetTitleFont(42);
   h2_copy11->GetZaxis()->SetLabelFont(42);
   h2_copy11->GetZaxis()->SetLabelSize(0.035);
   h2_copy11->GetZaxis()->SetTitleSize(0.035);
   h2_copy11->GetZaxis()->SetTitleFont(42);
   h2_copy11->Draw("Esame");
   TLine *line = new TLine(30,1,400,1);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis11[6] = {30, 40, 50, 70, 90, 400}; 
   
   TH1D *h1_copy12 = new TH1D("h1_copy12","",5, xAxis11);
   h1_copy12->SetBinContent(1,1);
   h1_copy12->SetBinContent(2,1);
   h1_copy12->SetBinContent(3,1);
   h1_copy12->SetBinContent(4,1);
   h1_copy12->SetBinContent(5,1);
   h1_copy12->SetBinError(1,0.2930282);
   h1_copy12->SetBinError(2,0.5537727);
   h1_copy12->SetBinError(3,0.3209607);
   h1_copy12->SetBinError(4,0.3863372);
   h1_copy12->SetBinError(5,0.5628121);
   h1_copy12->SetMinimum(0);
   h1_copy12->SetMaximum(2);
   h1_copy12->SetEntries(25.99943);
   h1_copy12->SetDirectory(0);
   h1_copy12->SetStats(0);
   h1_copy12->SetFillColor(1);
   h1_copy12->SetFillStyle(3001);
   h1_copy12->SetLineColor(ci);
   h1_copy12->SetLineWidth(2);
   h1_copy12->SetMarkerColor(ci);
   h1_copy12->GetXaxis()->SetTitle("MT2");
   h1_copy12->GetXaxis()->SetLabelFont(42);
   h1_copy12->GetXaxis()->SetLabelSize(0);
   h1_copy12->GetXaxis()->SetTitleSize(0.2);
   h1_copy12->GetXaxis()->SetTickLength(0.09);
   h1_copy12->GetXaxis()->SetTitleOffset(0.5);
   h1_copy12->GetXaxis()->SetTitleFont(42);
   h1_copy12->GetYaxis()->SetTitle("Data / MC");
   h1_copy12->GetYaxis()->SetNdivisions(509);
   h1_copy12->GetYaxis()->SetLabelFont(42);
   h1_copy12->GetYaxis()->SetLabelSize(0.19);
   h1_copy12->GetYaxis()->SetTitleSize(0.18);
   h1_copy12->GetYaxis()->SetTitleOffset(0.36);
   h1_copy12->GetYaxis()->SetTitleFont(42);
   h1_copy12->GetZaxis()->SetLabelFont(42);
   h1_copy12->GetZaxis()->SetLabelSize(0.035);
   h1_copy12->GetZaxis()->SetTitleSize(0.035);
   h1_copy12->GetZaxis()->SetTitleFont(42);
   h1_copy12->Draw("sameaxis");
   MT2_ratio_AllSUSY_ratiopad_MT2_Total200_000000_fromMuTau->Modified();
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->cd();
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->Modified();
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->cd();
   MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau->SetSelected(MT2_ratio_AllSUSYc_ratio_MT2_Total200_000000_fromMuTau);
}
