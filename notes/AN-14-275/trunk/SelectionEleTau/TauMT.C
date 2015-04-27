void TauMT()
{
//=========Macro generated from canvas: TauMT_ratio_AllSUSYc_ratio_TauMT_MT2Cut/
//=========  (Sun Mar 15 19:10:01 2015) by ROOT version6.02/04
   TCanvas *muTau_log_comp_overlay = new TCanvas("muTau_log_comp_overlay", "",1,52,600,630);
   gStyle->SetOptFit(1);
   muTau_log_comp_overlay->Range(-121.6216,-3.072356,554.0541,2.4202);
   muTau_log_comp_overlay->SetFillColor(0);
   muTau_log_comp_overlay->SetFillStyle(4000);
   muTau_log_comp_overlay->SetBorderMode(0);
   muTau_log_comp_overlay->SetBorderSize(2);
   muTau_log_comp_overlay->SetLogy();
   muTau_log_comp_overlay->SetLeftMargin(0.18);
   muTau_log_comp_overlay->SetRightMargin(0.08);
   muTau_log_comp_overlay->SetTopMargin(0.07);
   muTau_log_comp_overlay->SetBottomMargin(0.17);
   muTau_log_comp_overlay->SetFrameFillStyle(0);
   muTau_log_comp_overlay->SetFrameLineWidth(3);
   muTau_log_comp_overlay->SetFrameBorderMode(0);
   muTau_log_comp_overlay->SetFrameBorderSize(0);
   muTau_log_comp_overlay->SetFrameFillStyle(0);
   muTau_log_comp_overlay->SetFrameLineWidth(3);
   muTau_log_comp_overlay->SetFrameBorderMode(0);
   muTau_log_comp_overlay->SetFrameBorderSize(0);
   
   THStack *MT2Cut_TauMT = new THStack();
   MT2Cut_TauMT->SetName("MT2Cut_TauMT");
   MT2Cut_TauMT->SetTitle("");
   MT2Cut_TauMT->SetMinimum(0.02);
   MT2Cut_TauMT->SetMaximum(40);
   
   TH1F *MT2Cut_TauMT_stack_1 = new TH1F("MT2Cut_TauMT_stack_1","",10,0,500);
   MT2Cut_TauMT_stack_1->SetMinimum(0.007545703);
   MT2Cut_TauMT_stack_1->SetMaximum(66.40824);
   MT2Cut_TauMT_stack_1->SetDirectory(0);
   MT2Cut_TauMT_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   MT2Cut_TauMT_stack_1->SetLineColor(ci);
   MT2Cut_TauMT_stack_1->GetXaxis()->SetTitle("TauMT");
   MT2Cut_TauMT_stack_1->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_stack_1->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_stack_1->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_stack_1->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_stack_1->GetYaxis()->SetTitle("Events");
   MT2Cut_TauMT_stack_1->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_stack_1->GetYaxis()->SetLabelSize(0.05);
   MT2Cut_TauMT_stack_1->GetYaxis()->SetTitleSize(0.05);
   MT2Cut_TauMT_stack_1->GetYaxis()->SetTitleOffset(1.3);
   MT2Cut_TauMT_stack_1->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_stack_1->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_stack_1->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_stack_1->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_stack_1->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->SetHistogram(MT2Cut_TauMT_stack_1);
   
   
   TH1D *MT2Cut_TauMT_QCD1 = new TH1D("MT2Cut_TauMT_QCD1","",10,0,500);
   MT2Cut_TauMT_QCD1->SetEntries(4);
   MT2Cut_TauMT_QCD1->SetDirectory(0);
   MT2Cut_TauMT_QCD1->SetStats(0);

   ci = TColor::GetColor("#cccc00");
   MT2Cut_TauMT_QCD1->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   MT2Cut_TauMT_QCD1->SetLineColor(ci);
   MT2Cut_TauMT_QCD1->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   MT2Cut_TauMT_QCD1->SetMarkerColor(ci);
   MT2Cut_TauMT_QCD1->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_QCD1->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_QCD1->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_QCD1->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_QCD1->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_QCD1->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_QCD1->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_QCD1->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_QCD1->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_QCD1->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_QCD1->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_QCD1->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_QCD1,"");
   
   TH1D *MT2Cut_TauMT_W2 = new TH1D("MT2Cut_TauMT_W2","",10,0,500);
   MT2Cut_TauMT_W2->SetBinContent(3,10.33283);
   MT2Cut_TauMT_W2->SetBinContent(4,4.556571);
   MT2Cut_TauMT_W2->SetBinContent(5,0.9916761);
   MT2Cut_TauMT_W2->SetBinContent(6,0.1246921);
   MT2Cut_TauMT_W2->SetBinContent(7,0.1692765);
   MT2Cut_TauMT_W2->SetBinError(3,2.827801);
   MT2Cut_TauMT_W2->SetBinError(4,2.970974);
   MT2Cut_TauMT_W2->SetBinError(5,0.5845425);
   MT2Cut_TauMT_W2->SetBinError(6,0.1246921);
   MT2Cut_TauMT_W2->SetBinError(7,0.1692765);
   MT2Cut_TauMT_W2->SetEntries(33);
   MT2Cut_TauMT_W2->SetDirectory(0);
   MT2Cut_TauMT_W2->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   MT2Cut_TauMT_W2->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   MT2Cut_TauMT_W2->SetLineColor(ci);
   MT2Cut_TauMT_W2->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   MT2Cut_TauMT_W2->SetMarkerColor(ci);
   MT2Cut_TauMT_W2->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_W2->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_W2->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_W2->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_W2->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_W2->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_W2->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_W2->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_W2->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_W2->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_W2->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_W2->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_W2,"");
   
   TH1D *MT2Cut_TauMT_ZX3 = new TH1D("MT2Cut_TauMT_ZX3","",10,0,500);
   MT2Cut_TauMT_ZX3->SetBinContent(3,0.3265244);
   MT2Cut_TauMT_ZX3->SetBinContent(4,1.111712);
   MT2Cut_TauMT_ZX3->SetBinContent(5,0.2163953);
   MT2Cut_TauMT_ZX3->SetBinContent(6,0.05343722);
   MT2Cut_TauMT_ZX3->SetBinContent(7,0.0357069);
   MT2Cut_TauMT_ZX3->SetBinContent(8,0.04651853);
   MT2Cut_TauMT_ZX3->SetBinContent(10,0.0305328);
   MT2Cut_TauMT_ZX3->SetBinError(3,0.0594677);
   MT2Cut_TauMT_ZX3->SetBinError(4,0.5378119);
   MT2Cut_TauMT_ZX3->SetBinError(5,0.04788545);
   MT2Cut_TauMT_ZX3->SetBinError(6,0.02203407);
   MT2Cut_TauMT_ZX3->SetBinError(7,0.0161262);
   MT2Cut_TauMT_ZX3->SetBinError(8,0.02115174);
   MT2Cut_TauMT_ZX3->SetBinError(10,0.01778534);
   MT2Cut_TauMT_ZX3->SetBinError(11,0.01778534);
   MT2Cut_TauMT_ZX3->SetEntries(169);
   MT2Cut_TauMT_ZX3->SetDirectory(0);
   MT2Cut_TauMT_ZX3->SetStats(0);

   ci = TColor::GetColor("#006600");
   MT2Cut_TauMT_ZX3->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   MT2Cut_TauMT_ZX3->SetLineColor(ci);
   MT2Cut_TauMT_ZX3->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   MT2Cut_TauMT_ZX3->SetMarkerColor(ci);
   MT2Cut_TauMT_ZX3->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_ZX3->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_ZX3->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_ZX3->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_ZX3->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_ZX3->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_ZX3->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_ZX3->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_ZX3->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_ZX3->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_ZX3->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_ZX3->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_ZX3,"");
   
   TH1D *MT2Cut_TauMT_Top4 = new TH1D("MT2Cut_TauMT_Top4","",10,0,500);
   MT2Cut_TauMT_Top4->SetBinContent(4,0.6260808);
   MT2Cut_TauMT_Top4->SetBinContent(5,0.01808909);
   MT2Cut_TauMT_Top4->SetBinError(4,0.6237615);
   MT2Cut_TauMT_Top4->SetBinError(5,0.01808909);
   MT2Cut_TauMT_Top4->SetEntries(7);
   MT2Cut_TauMT_Top4->SetDirectory(0);
   MT2Cut_TauMT_Top4->SetStats(0);

   ci = TColor::GetColor("#3366cc");
   MT2Cut_TauMT_Top4->SetFillColor(ci);

   ci = TColor::GetColor("#3366cc");
   MT2Cut_TauMT_Top4->SetLineColor(ci);
   MT2Cut_TauMT_Top4->SetLineWidth(2);

   ci = TColor::GetColor("#3366cc");
   MT2Cut_TauMT_Top4->SetMarkerColor(ci);
   MT2Cut_TauMT_Top4->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Top4->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Top4->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Top4->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_Top4->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Top4->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Top4->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Top4->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_Top4->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Top4->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Top4->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Top4->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_Top4,"");
   
   TH1D *MT2Cut_TauMT_WW5 = new TH1D("MT2Cut_TauMT_WW5","",10,0,500);
   MT2Cut_TauMT_WW5->SetBinContent(3,0.9061542);
   MT2Cut_TauMT_WW5->SetBinContent(4,0.6124773);
   MT2Cut_TauMT_WW5->SetBinContent(5,0.02362514);
   MT2Cut_TauMT_WW5->SetBinContent(8,0.02707293);
   MT2Cut_TauMT_WW5->SetBinError(3,0.2137671);
   MT2Cut_TauMT_WW5->SetBinError(4,0.1812524);
   MT2Cut_TauMT_WW5->SetBinError(5,0.02362514);
   MT2Cut_TauMT_WW5->SetBinError(8,0.02707293);
   MT2Cut_TauMT_WW5->SetEntries(37);
   MT2Cut_TauMT_WW5->SetDirectory(0);
   MT2Cut_TauMT_WW5->SetStats(0);

   ci = TColor::GetColor("#000066");
   MT2Cut_TauMT_WW5->SetFillColor(ci);

   ci = TColor::GetColor("#000066");
   MT2Cut_TauMT_WW5->SetLineColor(ci);
   MT2Cut_TauMT_WW5->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   MT2Cut_TauMT_WW5->SetMarkerColor(ci);
   MT2Cut_TauMT_WW5->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_WW5->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_WW5->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_WW5->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_WW5->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_WW5->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_WW5->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_WW5->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_WW5->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_WW5->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_WW5->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_WW5->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_WW5,"");
   
   TH1D *MT2Cut_TauMT_Higgs6 = new TH1D("MT2Cut_TauMT_Higgs6","",10,0,500);
   MT2Cut_TauMT_Higgs6->SetBinContent(3,0.05743365);
   MT2Cut_TauMT_Higgs6->SetBinContent(4,0.08060716);
   MT2Cut_TauMT_Higgs6->SetBinContent(5,0.01882681);
   MT2Cut_TauMT_Higgs6->SetBinContent(6,0.03632003);
   MT2Cut_TauMT_Higgs6->SetBinError(3,0.01892573);
   MT2Cut_TauMT_Higgs6->SetBinError(4,0.02285179);
   MT2Cut_TauMT_Higgs6->SetBinError(5,0.009686346);
   MT2Cut_TauMT_Higgs6->SetBinError(6,0.01478444);
   MT2Cut_TauMT_Higgs6->SetEntries(38);
   MT2Cut_TauMT_Higgs6->SetDirectory(0);
   MT2Cut_TauMT_Higgs6->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   MT2Cut_TauMT_Higgs6->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   MT2Cut_TauMT_Higgs6->SetLineColor(ci);
   MT2Cut_TauMT_Higgs6->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   MT2Cut_TauMT_Higgs6->SetMarkerColor(ci);
   MT2Cut_TauMT_Higgs6->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Higgs6->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Higgs6->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Higgs6->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_Higgs6->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Higgs6->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Higgs6->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Higgs6->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_Higgs6->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_Higgs6->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_Higgs6->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_Higgs6->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT->Add(MT2Cut_TauMT_Higgs6,"");
   MT2Cut_TauMT->Draw("hist");
   
   TH1D *h2_copy7 = new TH1D("h2_copy7","",10,0,500);
   h2_copy7->SetBinContent(3,0.001847956);
   h2_copy7->SetBinContent(4,0.001497401);
   h2_copy7->SetBinContent(5,0.001429017);
   h2_copy7->SetBinContent(7,0.001722822);
   h2_copy7->SetBinContent(10,0.001497401);
   h2_copy7->SetBinError(3,4);
   h2_copy7->SetBinError(4,2.44949);
   h2_copy7->SetBinError(5,1);
   h2_copy7->SetBinError(7,1);
   h2_copy7->SetBinError(10,1);
   h2_copy7->SetBinError(11,1);
   h2_copy7->SetMaximum(40);
   h2_copy7->SetEntries(34);
   h2_copy7->SetDirectory(0);
   h2_copy7->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   h2_copy7->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   h2_copy7->SetLineColor(ci);
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
   
   TH1D *MT2Cut_TauMT_SUSY_380_18 = new TH1D("MT2Cut_TauMT_SUSY_380_18","",10,0,500);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(2,0.006439696);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(3,0.4453264);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(4,0.8333082);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(5,0.7553611);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(6,0.4857236);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(7,0.2691086);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(8,0.210352);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(9,0.08663795);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(10,0.07073029);
   MT2Cut_TauMT_SUSY_380_18->SetBinContent(11,0.1065475);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(2,0.004587076);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(3,0.03799133);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(4,0.05097241);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(5,0.048744);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(6,0.03859808);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(7,0.02892776);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(8,0.02544825);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(9,0.01599838);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(10,0.01447869);
   MT2Cut_TauMT_SUSY_380_18->SetBinError(11,0.01811847);
   MT2Cut_TauMT_SUSY_380_18->SetEntries(1104);
   MT2Cut_TauMT_SUSY_380_18->SetDirectory(0);
   MT2Cut_TauMT_SUSY_380_18->SetStats(0);
   MT2Cut_TauMT_SUSY_380_18->SetFillStyle(0);
   MT2Cut_TauMT_SUSY_380_18->SetLineWidth(4);
   MT2Cut_TauMT_SUSY_380_18->SetMarkerStyle(20);
   MT2Cut_TauMT_SUSY_380_18->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT_SUSY_380_18->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT_SUSY_380_18->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT_SUSY_380_18->GetYaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetYaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT_SUSY_380_18->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT_SUSY_380_18->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT_SUSY_380_18->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT_SUSY_380_18->Draw("samehist");
   TLatex *   tex = new TLatex(0.13,0.943,"");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.64,0.943,"#sqrt{s} = 8 TeV, L = 19.60 fb^{-1}");
   tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *MT2Cut_TauMT9 = new TH1F("MT2Cut_TauMT9","",10,0,500);
   MT2Cut_TauMT9->SetMinimum(0.007545703);
   MT2Cut_TauMT9->SetMaximum(66.40824);
   MT2Cut_TauMT9->SetDirectory(0);
   MT2Cut_TauMT9->SetStats(0);

   ci = TColor::GetColor("#000099");
   MT2Cut_TauMT9->SetLineColor(ci);
   MT2Cut_TauMT9->GetXaxis()->SetTitle("TauMT");
   MT2Cut_TauMT9->GetXaxis()->SetLabelFont(42);
   MT2Cut_TauMT9->GetXaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT9->GetXaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT9->GetXaxis()->SetTitleFont(42);
   MT2Cut_TauMT9->GetYaxis()->SetTitle("Events");
   MT2Cut_TauMT9->GetYaxis()->SetLabelFont(42);
   MT2Cut_TauMT9->GetYaxis()->SetLabelSize(0.05);
   MT2Cut_TauMT9->GetYaxis()->SetTitleSize(0.05);
   MT2Cut_TauMT9->GetYaxis()->SetTitleOffset(1.3);
   MT2Cut_TauMT9->GetYaxis()->SetTitleFont(42);
   MT2Cut_TauMT9->GetZaxis()->SetLabelFont(42);
   MT2Cut_TauMT9->GetZaxis()->SetLabelSize(0.035);
   MT2Cut_TauMT9->GetZaxis()->SetTitleSize(0.035);
   MT2Cut_TauMT9->GetZaxis()->SetTitleFont(42);
   MT2Cut_TauMT9->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.7097315,0.5667599,0.909396,0.9204253,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("MT2Cut_TauMT_QCD","QCD","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_W","W","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_ZX","ZX","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_Top","Top","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_WW","WW","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_Higgs","Higgs","f");

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
   entry=leg->AddEntry("MT2Cut_TauMT_data","data","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MT2Cut_TauMT_SUSY_380_1","SUSY(380,1)","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();

}
