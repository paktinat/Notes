void MT2muTau_tauMTgt200_DDFake(){   
  float sysMC   = 0.25;
  float sysLRMC = 0.5;
  const int nBins = 6;

  Double_t xbin[7] = {0, 20, 40, 50, 70, 90, 120}; 
  
  //=========Macro generated from canvas: muTau_log_comp_overlayc_ratio/
  //=========  (Sat Oct 10 11:55:07 2015) by ROOT version5.34/03
  TCanvas *muTau_log_comp_overlayc_ratio = new TCanvas("MT2muTau_tauMTgt200_DDFake", "",1,52,600,600);
  gStyle->SetOptFit(1);
  muTau_log_comp_overlayc_ratio->Range(0,0,1,1);
  muTau_log_comp_overlayc_ratio->SetFillColor(0);
  muTau_log_comp_overlayc_ratio->SetBorderMode(0);
  muTau_log_comp_overlayc_ratio->SetBorderSize(2);
  muTau_log_comp_overlayc_ratio->SetLeftMargin(0.13);
  muTau_log_comp_overlayc_ratio->SetRightMargin(0.08);
  muTau_log_comp_overlayc_ratio->SetTopMargin(0.07);
  muTau_log_comp_overlayc_ratio->SetBottomMargin(0.13);
  muTau_log_comp_overlayc_ratio->SetFrameBorderMode(0);
  muTau_log_comp_overlayc_ratio->SetFrameBorderSize(0);

  muTau_log_comp_overlayc_ratio->SetLogy();

  // ------------>Primitives in pad: muTau_log_comp_overlay_plotpad
  // TPad *muTau_log_comp_overlay_plotpad = new TPad("muTau_log_comp_overlay_plotpad", "Pad containing the overlay plot",0,0.211838,1,1);
  // muTau_log_comp_overlay_plotpad->Draw();
  // muTau_log_comp_overlay_plotpad->cd();
  // muTau_log_comp_overlay_plotpad->Range(-20.02671,-2.48782,132.1762,2.364311);
  // muTau_log_comp_overlay_plotpad->SetFillColor(0);
  // muTau_log_comp_overlay_plotpad->SetFillStyle(4000);
  // muTau_log_comp_overlay_plotpad->SetBorderMode(0);
  // muTau_log_comp_overlay_plotpad->SetBorderSize(2);
  // muTau_log_comp_overlay_plotpad->SetLogy();
  // muTau_log_comp_overlay_plotpad->SetLeftMargin(0.131579);
  // muTau_log_comp_overlay_plotpad->SetRightMargin(0.08);
  // muTau_log_comp_overlay_plotpad->SetTopMargin(0.06895515);
  // muTau_log_comp_overlay_plotpad->SetBottomMargin(0.07206074);
  // muTau_log_comp_overlay_plotpad->SetFrameLineWidth(3);
  // muTau_log_comp_overlay_plotpad->SetFrameBorderMode(0);
  // muTau_log_comp_overlay_plotpad->SetFrameBorderSize(0);
  // muTau_log_comp_overlay_plotpad->SetFrameLineWidth(3);
  // muTau_log_comp_overlay_plotpad->SetFrameBorderMode(0);
  // muTau_log_comp_overlay_plotpad->SetFrameBorderSize(0);
   
  THStack *h_stack = new THStack();
  h_stack->SetName("h_stack");
  h_stack->SetTitle("");
  h_stack->SetMinimum(0.1);
  h_stack->SetMaximum(200.00391);
   
  TH1F *h_stack_stack_1 = new TH1F("h_stack_stack_1","",120,0,120);
  h_stack_stack_1->SetMinimum(0.1);
  h_stack_stack_1->SetMaximum(200.0);
  h_stack_stack_1->SetDirectory(0);
  h_stack_stack_1->SetStats(0);
  h_stack_stack_1->SetLineWidth(2);
  h_stack_stack_1->GetXaxis()->SetTitle("M_{T2}");
  h_stack_stack_1->GetXaxis()->SetNdivisions(505);
  h_stack_stack_1->GetXaxis()->SetLabelFont(42);
  h_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
  h_stack_stack_1->GetXaxis()->SetTitleSize(0.05);
  h_stack_stack_1->GetXaxis()->SetTitleOffset(1.1);
  h_stack_stack_1->GetXaxis()->SetTitleFont(42);
  h_stack_stack_1->GetYaxis()->SetTitle("Events");
  h_stack_stack_1->GetYaxis()->SetNdivisions(505);
  h_stack_stack_1->GetYaxis()->SetLabelFont(42);
  h_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
  h_stack_stack_1->GetYaxis()->SetTitleSize(0.05);
  h_stack_stack_1->GetYaxis()->SetTitleOffset(1.3);
  h_stack_stack_1->GetYaxis()->SetTitleFont(42);
  h_stack_stack_1->GetZaxis()->SetLabelFont(42);
  h_stack_stack_1->GetZaxis()->SetLabelSize(0.035);
  h_stack_stack_1->GetZaxis()->SetTitleSize(0.035);
  h_stack_stack_1->GetZaxis()->SetTitleFont(42);
  h_stack->SetHistogram(h_stack_stack_1);

   
  Double_t xAxis12[7] = {0, 20, 40, 50, 70, 90, 120}; 
  TH1D *h__MC = new TH1D("h__MC","",nBins, xAxis12);
   
  Double_t xAxis3[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *hAllMC1__Zjets = new TH1D("hAllMC1__Zjets","",120, xAxis3);
  hAllMC1__Zjets->SetBinContent(41,0.0006827924);
  hAllMC1__Zjets->SetBinContent(42,0.01386022);
  hAllMC1__Zjets->SetBinContent(43,0.005643897);
  hAllMC1__Zjets->SetBinContent(44,0.03089002);
  hAllMC1__Zjets->SetBinContent(45,0.01685633);
  hAllMC1__Zjets->SetBinContent(46,0.008106323);
  hAllMC1__Zjets->SetBinContent(48,0.01120426);
  hAllMC1__Zjets->SetBinContent(49,0.01503992);
  hAllMC1__Zjets->SetBinContent(50,0.02550239);
  hAllMC1__Zjets->SetBinContent(52,0.002369088);
  hAllMC1__Zjets->SetBinContent(53,0.01291693);
  hAllMC1__Zjets->SetBinContent(55,0.00242443);
  hAllMC1__Zjets->SetBinContent(56,0.008679594);
  hAllMC1__Zjets->SetBinContent(57,0.05340725);
  hAllMC1__Zjets->SetBinContent(58,0.04137211);
  hAllMC1__Zjets->SetBinContent(59,0.000732791);
  hAllMC1__Zjets->SetBinContent(60,0.01285516);
  hAllMC1__Zjets->SetBinContent(61,0.0110938);
  hAllMC1__Zjets->SetBinContent(62,0.0318359);
  hAllMC1__Zjets->SetBinContent(63,0.01812064);
  hAllMC1__Zjets->SetBinContent(64,0.009500618);
  hAllMC1__Zjets->SetBinContent(65,0.0006787097);
  hAllMC1__Zjets->SetBinContent(66,0.003956375);
  hAllMC1__Zjets->SetBinContent(67,0.009339704);
  hAllMC1__Zjets->SetBinContent(68,0.01927834);
  hAllMC1__Zjets->SetBinContent(69,0.02112607);
  hAllMC1__Zjets->SetBinContent(71,0.01048026);
  hAllMC1__Zjets->SetBinContent(73,0.0006559423);
  hAllMC1__Zjets->SetBinContent(74,0.002723144);
  hAllMC1__Zjets->SetBinContent(76,0.02860624);
  hAllMC1__Zjets->SetBinContent(77,0.01079395);
  hAllMC1__Zjets->SetBinContent(78,0.001285349);
  hAllMC1__Zjets->SetBinContent(81,0.004049071);
  hAllMC1__Zjets->SetBinContent(82,0.007675379);
  hAllMC1__Zjets->SetBinContent(83,0.01147673);
  hAllMC1__Zjets->SetBinContent(84,0.000642498);
  hAllMC1__Zjets->SetBinContent(85,0.02010541);
  hAllMC1__Zjets->SetBinContent(87,0.006402784);
  hAllMC1__Zjets->SetBinContent(89,0.02045353);
  hAllMC1__Zjets->SetBinContent(96,0.008356386);
  hAllMC1__Zjets->SetBinContent(98,0.0103527);
  hAllMC1__Zjets->SetBinContent(99,0.0006997538);
  hAllMC1__Zjets->SetBinContent(101,0.007410681);
  hAllMC1__Zjets->SetBinContent(104,0.01194097);
  hAllMC1__Zjets->SetBinContent(106,0.009773046);
  hAllMC1__Zjets->SetBinContent(109,0.007647995);
  hAllMC1__Zjets->SetBinContent(111,0.01158174);
  hAllMC1__Zjets->SetBinContent(119,0.0008038195);
  hAllMC1__Zjets->SetBinContent(120,0.2093075);
  hAllMC1__Zjets->SetBinError(41,0.0006827924);
  hAllMC1__Zjets->SetBinError(42,0.01386022);
  hAllMC1__Zjets->SetBinError(43,0.004946667);
  hAllMC1__Zjets->SetBinError(44,0.01800604);
  hAllMC1__Zjets->SetBinError(45,0.01192512);
  hAllMC1__Zjets->SetBinError(46,0.008106323);
  hAllMC1__Zjets->SetBinError(48,0.009506448);
  hAllMC1__Zjets->SetBinError(49,0.01119106);
  hAllMC1__Zjets->SetBinError(50,0.01673223);
  hAllMC1__Zjets->SetBinError(52,0.002369088);
  hAllMC1__Zjets->SetBinError(53,0.01223788);
  hAllMC1__Zjets->SetBinError(55,0.00242443);
  hAllMC1__Zjets->SetBinError(56,0.008619115);
  hAllMC1__Zjets->SetBinError(57,0.02405829);
  hAllMC1__Zjets->SetBinError(58,0.02075422);
  hAllMC1__Zjets->SetBinError(59,0.000732791);
  hAllMC1__Zjets->SetBinError(60,0.01227726);
  hAllMC1__Zjets->SetBinError(61,0.009720925);
  hAllMC1__Zjets->SetBinError(62,0.01843483);
  hAllMC1__Zjets->SetBinError(63,0.01281339);
  hAllMC1__Zjets->SetBinError(64,0.009378163);
  hAllMC1__Zjets->SetBinError(65,0.0006787097);
  hAllMC1__Zjets->SetBinError(66,0.003956375);
  hAllMC1__Zjets->SetBinError(67,0.006336724);
  hAllMC1__Zjets->SetBinError(68,0.01368248);
  hAllMC1__Zjets->SetBinError(69,0.01349077);
  hAllMC1__Zjets->SetBinError(71,0.01026105);
  hAllMC1__Zjets->SetBinError(73,0.0006559423);
  hAllMC1__Zjets->SetBinError(74,0.001747114);
  hAllMC1__Zjets->SetBinError(76,0.01654545);
  hAllMC1__Zjets->SetBinError(77,0.01079395);
  hAllMC1__Zjets->SetBinError(78,0.0009092605);
  hAllMC1__Zjets->SetBinError(81,0.003483993);
  hAllMC1__Zjets->SetBinError(82,0.007675379);
  hAllMC1__Zjets->SetBinError(83,0.01147673);
  hAllMC1__Zjets->SetBinError(84,0.000642498);
  hAllMC1__Zjets->SetBinError(85,0.01368008);
  hAllMC1__Zjets->SetBinError(87,0.006402784);
  hAllMC1__Zjets->SetBinError(89,0.01451394);
  hAllMC1__Zjets->SetBinError(96,0.008356386);
  hAllMC1__Zjets->SetBinError(98,0.0103527);
  hAllMC1__Zjets->SetBinError(99,0.0006997538);
  hAllMC1__Zjets->SetBinError(101,0.007410681);
  hAllMC1__Zjets->SetBinError(104,0.01194097);
  hAllMC1__Zjets->SetBinError(106,0.009773046);
  hAllMC1__Zjets->SetBinError(109,0.007647995);
  hAllMC1__Zjets->SetBinError(111,0.01097744);
  hAllMC1__Zjets->SetBinError(119,0.0008038195);
  hAllMC1__Zjets->SetBinError(120,0.05151812);
  hAllMC1__Zjets->SetBinError(121,0.05151288);
  hAllMC1__Zjets->SetEntries(155);
  hAllMC1__Zjets->SetStats(0);


  Double_t xAxis14[7] = {0, 20, 40, 50, 70, 90, 120}; 
   
  TH1D *h2_DDFakeZX = new TH1D("h2_DDFakeZX","",6, xAxis14);
  h2_DDFakeZX->SetBinContent(1,0.9752602);
  h2_DDFakeZX->SetBinContent(2,0.03023043);
  h2_DDFakeZX->SetBinContent(3,0.01827103);
  h2_DDFakeZX->SetBinContent(4,0.04970577);
  h2_DDFakeZX->SetBinContent(5,0.0006559424);
  h2_DDFakeZX->SetBinContent(6,0.02707373);
  h2_DDFakeZX->SetBinError(1,0.5679288);
  h2_DDFakeZX->SetBinError(2,0.01578177);
  h2_DDFakeZX->SetBinError(3,0.01309314);
  h2_DDFakeZX->SetBinError(4,0.02176908);
  h2_DDFakeZX->SetBinError(5,0.0006559424);
  h2_DDFakeZX->SetBinError(6,0.01725974);
  h2_DDFakeZX->SetEntries(81);
  h2_DDFakeZX->SetStats(0);
   
  TH1 *hAllMC__Zjets = hAllMC1__Zjets->Rebin(nBins,"hAllMC__Zjets",xbin);   
  hAllMC__Zjets->Add(h2_DDFakeZX, -1);

  for(int i = 1; i <= hAllMC__Zjets->GetNbinsX(); i++){
    float Content = hAllMC__Zjets->GetBinContent(i);   
    float error   = hAllMC__Zjets->GetBinError(i);
    error = sqrt(error * error + sysMC * sysMC * Content * Content);
    hAllMC__Zjets->SetBinError(i, error);
  }


  ci = TColor::GetColor("#006600");
  hAllMC__Zjets->SetFillColor(ci);

  ci = TColor::GetColor("#006600");
  hAllMC__Zjets->SetLineColor(ci);
  hAllMC__Zjets->SetLineWidth(2);

  ci = TColor::GetColor("#006600");
  hAllMC__Zjets->SetMarkerColor(ci);
  hAllMC__Zjets->GetXaxis()->SetNdivisions(505);
  hAllMC__Zjets->GetXaxis()->SetLabelFont(42);
  hAllMC__Zjets->GetXaxis()->SetLabelSize(0.07);
  hAllMC__Zjets->GetXaxis()->SetTitleSize(0.07);
  hAllMC__Zjets->GetXaxis()->SetTitleOffset(1.1);
  hAllMC__Zjets->GetXaxis()->SetTitleFont(42);
  hAllMC__Zjets->GetYaxis()->SetNdivisions(505);
  hAllMC__Zjets->GetYaxis()->SetLabelFont(42);
  hAllMC__Zjets->GetYaxis()->SetLabelSize(0.07);
  hAllMC__Zjets->GetYaxis()->SetTitleSize(0.07);
  hAllMC__Zjets->GetYaxis()->SetTitleOffset(1.3);
  hAllMC__Zjets->GetYaxis()->SetTitleFont(42);
  hAllMC__Zjets->GetZaxis()->SetLabelFont(42);
  hAllMC__Zjets->GetZaxis()->SetLabelSize(0.035);
  hAllMC__Zjets->GetZaxis()->SetTitleSize(0.035);
  hAllMC__Zjets->GetZaxis()->SetTitleFont(42);

  Double_t xAxis4[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *hAllMC1__Top = new TH1D("hAllMC1__Top","",120, xAxis4);
  hAllMC1__Top->SetBinContent(43,1.03757);
  hAllMC1__Top->SetBinContent(48,0.3211796);
  hAllMC1__Top->SetBinContent(51,0.8800825);
  hAllMC1__Top->SetBinContent(52,2.16319);
  hAllMC1__Top->SetBinContent(54,0.3823006);
  hAllMC1__Top->SetBinContent(55,11.55832);
  hAllMC1__Top->SetBinContent(56,0.002529315);
  hAllMC1__Top->SetBinContent(62,0.003042429);
  hAllMC1__Top->SetBinContent(63,0.2992453);
  hAllMC1__Top->SetBinContent(65,0.6505874);
  hAllMC1__Top->SetBinContent(66,0.782987);
  hAllMC1__Top->SetBinContent(67,0.5756989);
  hAllMC1__Top->SetBinContent(79,0.6315629);
  hAllMC1__Top->SetBinContent(106,0.002123369);
  hAllMC1__Top->SetBinContent(120,0.000225774);
  hAllMC1__Top->SetBinError(43,0.8291714);
  hAllMC1__Top->SetBinError(48,0.3211796);
  hAllMC1__Top->SetBinError(51,0.8800825);
  hAllMC1__Top->SetBinError(52,1.316896);
  hAllMC1__Top->SetBinError(54,0.3823006);
  hAllMC1__Top->SetBinError(55,11.53573);
  hAllMC1__Top->SetBinError(56,0.002529315);
  hAllMC1__Top->SetBinError(62,0.003042429);
  hAllMC1__Top->SetBinError(63,0.2992453);
  hAllMC1__Top->SetBinError(65,0.6505874);
  hAllMC1__Top->SetBinError(66,0.782987);
  hAllMC1__Top->SetBinError(67,0.5756989);
  hAllMC1__Top->SetBinError(79,0.6315629);
  hAllMC1__Top->SetBinError(106,0.002123369);
  hAllMC1__Top->SetBinError(120,0.000225774);
  hAllMC1__Top->SetBinError(121,0.000225774);
  hAllMC1__Top->SetEntries(68);
  hAllMC1__Top->SetStats(0);


  Double_t xAxis15[7] = {0, 20, 40, 50, 70, 90, 120}; 
   
  TH1D *h2_DDFakeTop = new TH1D("h2_DDFakeTop","",6, xAxis15);
  h2_DDFakeTop->SetBinContent(1,2.096029);
  h2_DDFakeTop->SetBinContent(2,1.857709);
  h2_DDFakeTop->SetBinContent(3,0.5667898);
  h2_DDFakeTop->SetBinContent(4,15.34936);
  h2_DDFakeTop->SetBinContent(5,0.6315629);
  h2_DDFakeTop->SetBinContent(6,0.000225774);
  h2_DDFakeTop->SetBinError(1,1.210415);
  h2_DDFakeTop->SetBinError(2,1.29313);
  h2_DDFakeTop->SetBinError(3,0.4043275);
  h2_DDFakeTop->SetBinError(4,11.65251);
  h2_DDFakeTop->SetBinError(5,0.6315629);
  h2_DDFakeTop->SetBinError(6,0.000225774);
  h2_DDFakeTop->SetEntries(69);
  h2_DDFakeTop->SetStats(0);

  TH1 *hAllMC__Top = hAllMC1__Top->Rebin(nBins,"hAllMC__Top",xbin);   
  hAllMC__Top->Add(h2_DDFakeTop, -1);



  for(int i = 1; i <= hAllMC__Top->GetNbinsX(); i++){
    float Content = hAllMC__Top->GetBinContent(i);   
    float error   = hAllMC__Top->GetBinError(i);
    error = sqrt(error * error + sysLRMC * sysLRMC * Content * Content);
    hAllMC__Top->SetBinError(i, error);
  }




  ci = TColor::GetColor("#3366cc");
  hAllMC__Top->SetFillColor(ci);

  ci = TColor::GetColor("#3366cc");
  hAllMC__Top->SetLineColor(ci);
  hAllMC__Top->SetLineWidth(2);

  ci = TColor::GetColor("#3366cc");
  hAllMC__Top->SetMarkerColor(ci);
  hAllMC__Top->GetXaxis()->SetNdivisions(505);
  hAllMC__Top->GetXaxis()->SetLabelFont(42);
  hAllMC__Top->GetXaxis()->SetLabelSize(0.07);
  hAllMC__Top->GetXaxis()->SetTitleSize(0.07);
  hAllMC__Top->GetXaxis()->SetTitleOffset(1.1);
  hAllMC__Top->GetXaxis()->SetTitleFont(42);
  hAllMC__Top->GetYaxis()->SetNdivisions(505);
  hAllMC__Top->GetYaxis()->SetLabelFont(42);
  hAllMC__Top->GetYaxis()->SetLabelSize(0.07);
  hAllMC__Top->GetYaxis()->SetTitleSize(0.07);
  hAllMC__Top->GetYaxis()->SetTitleOffset(1.3);
  hAllMC__Top->GetYaxis()->SetTitleFont(42);
  hAllMC__Top->GetZaxis()->SetLabelFont(42);
  hAllMC__Top->GetZaxis()->SetLabelSize(0.035);
  hAllMC__Top->GetZaxis()->SetTitleSize(0.035);
  hAllMC__Top->GetZaxis()->SetTitleFont(42);

   
  Double_t xAxis5[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *hAllMC1__WWjets = new TH1D("hAllMC1__WWjets","",120, xAxis5);
  hAllMC1__WWjets->SetBinContent(41,0.1136337);
  hAllMC1__WWjets->SetBinContent(42,0.08605125);
  hAllMC1__WWjets->SetBinContent(45,0.04371758);
  hAllMC1__WWjets->SetBinContent(46,0.1632117);
  hAllMC1__WWjets->SetBinContent(47,0.1118787);
  hAllMC1__WWjets->SetBinContent(48,0.05648894);
  hAllMC1__WWjets->SetBinContent(49,0.09859266);
  hAllMC1__WWjets->SetBinContent(50,0.07990965);
  hAllMC1__WWjets->SetBinContent(51,0.1275485);
  hAllMC1__WWjets->SetBinContent(52,0.1668797);
  hAllMC1__WWjets->SetBinContent(53,0.1179977);
  hAllMC1__WWjets->SetBinContent(54,0.06109177);
  hAllMC1__WWjets->SetBinContent(55,0.1074497);
  hAllMC1__WWjets->SetBinContent(56,0.06608389);
  hAllMC1__WWjets->SetBinContent(57,0.2027269);
  hAllMC1__WWjets->SetBinContent(59,0.1205236);
  hAllMC1__WWjets->SetBinContent(61,0.1111237);
  hAllMC1__WWjets->SetBinContent(62,0.06582494);
  hAllMC1__WWjets->SetBinContent(63,0.04875974);
  hAllMC1__WWjets->SetBinContent(65,0.1613218);
  hAllMC1__WWjets->SetBinContent(66,0.09255498);
  hAllMC1__WWjets->SetBinContent(67,0.1153311);
  hAllMC1__WWjets->SetBinContent(68,0.1161155);
  hAllMC1__WWjets->SetBinContent(70,0.004479574);
  hAllMC1__WWjets->SetBinContent(71,0.1753881);
  hAllMC1__WWjets->SetBinContent(73,0.003102425);
  hAllMC1__WWjets->SetBinContent(75,0.0634672);
  hAllMC1__WWjets->SetBinContent(76,0.03442177);
  hAllMC1__WWjets->SetBinContent(77,0.04807891);
  hAllMC1__WWjets->SetBinContent(78,0.1094294);
  hAllMC1__WWjets->SetBinContent(79,0.04547063);
  hAllMC1__WWjets->SetBinContent(80,0.1569494);
  hAllMC1__WWjets->SetBinContent(83,0.05088787);
  hAllMC1__WWjets->SetBinContent(85,0.01511085);
  hAllMC1__WWjets->SetBinContent(88,0.05882002);
  hAllMC1__WWjets->SetBinContent(90,0.01747479);
  hAllMC1__WWjets->SetBinContent(94,0.05912144);
  hAllMC1__WWjets->SetBinContent(103,0.05795736);
  hAllMC1__WWjets->SetBinContent(105,0.04878004);
  hAllMC1__WWjets->SetBinContent(111,0.07491678);
  hAllMC1__WWjets->SetBinContent(120,0.09491619);
  hAllMC1__WWjets->SetBinError(41,0.08036205);
  hAllMC1__WWjets->SetBinError(42,0.06173635);
  hAllMC1__WWjets->SetBinError(45,0.04371758);
  hAllMC1__WWjets->SetBinError(46,0.09496645);
  hAllMC1__WWjets->SetBinError(47,0.07913623);
  hAllMC1__WWjets->SetBinError(48,0.05648894);
  hAllMC1__WWjets->SetBinError(49,0.07080448);
  hAllMC1__WWjets->SetBinError(50,0.06528534);
  hAllMC1__WWjets->SetBinError(51,0.08508351);
  hAllMC1__WWjets->SetBinError(52,0.09691566);
  hAllMC1__WWjets->SetBinError(53,0.08343889);
  hAllMC1__WWjets->SetBinError(54,0.06109177);
  hAllMC1__WWjets->SetBinError(55,0.07598534);
  hAllMC1__WWjets->SetBinError(56,0.06608389);
  hAllMC1__WWjets->SetBinError(57,0.1046128);
  hAllMC1__WWjets->SetBinError(59,0.08522341);
  hAllMC1__WWjets->SetBinError(61,0.07919169);
  hAllMC1__WWjets->SetBinError(62,0.06582494);
  hAllMC1__WWjets->SetBinError(63,0.04875974);
  hAllMC1__WWjets->SetBinError(65,0.09322965);
  hAllMC1__WWjets->SetBinError(66,0.06550034);
  hAllMC1__WWjets->SetBinError(67,0.08156669);
  hAllMC1__WWjets->SetBinError(68,0.08217127);
  hAllMC1__WWjets->SetBinError(70,0.004479574);
  hAllMC1__WWjets->SetBinError(71,0.1018681);
  hAllMC1__WWjets->SetBinError(73,0.003102425);
  hAllMC1__WWjets->SetBinError(75,0.0634672);
  hAllMC1__WWjets->SetBinError(76,0.03139863);
  hAllMC1__WWjets->SetBinError(77,0.04807891);
  hAllMC1__WWjets->SetBinError(78,0.07742814);
  hAllMC1__WWjets->SetBinError(79,0.04547063);
  hAllMC1__WWjets->SetBinError(80,0.09084147);
  hAllMC1__WWjets->SetBinError(83,0.05088787);
  hAllMC1__WWjets->SetBinError(85,0.01511085);
  hAllMC1__WWjets->SetBinError(88,0.05882002);
  hAllMC1__WWjets->SetBinError(90,0.01747479);
  hAllMC1__WWjets->SetBinError(94,0.05912144);
  hAllMC1__WWjets->SetBinError(103,0.05795736);
  hAllMC1__WWjets->SetBinError(105,0.04878004);
  hAllMC1__WWjets->SetBinError(111,0.07491678);
  hAllMC1__WWjets->SetBinError(120,0.07004028);
  hAllMC1__WWjets->SetBinError(121,0.07004028);
  hAllMC1__WWjets->SetEntries(75);
  hAllMC1__WWjets->SetStats(0);


  Double_t xAxis16[7] = {0, 20, 40, 50, 70, 90, 120}; 
   
  TH1D *h2_DDFakeWW = new TH1D("h2_DDFakeWW","",6, xAxis16);
  h2_DDFakeWW->SetBinContent(1,1.155077);
  h2_DDFakeWW->SetBinContent(2,0.2143875);
  h2_DDFakeWW->SetBinContent(3,0.279735);
  h2_DDFakeWW->SetBinContent(4,0.5548578);
  h2_DDFakeWW->SetBinContent(5,0.3454975);
  h2_DDFakeWW->SetBinContent(6,0.1503754);
  h2_DDFakeWW->SetBinError(1,0.2511725);
  h2_DDFakeWW->SetBinError(2,0.09569305);
  h2_DDFakeWW->SetBinError(3,0.1256716);
  h2_DDFakeWW->SetBinError(4,0.1762982);
  h2_DDFakeWW->SetBinError(5,0.1304189);
  h2_DDFakeWW->SetBinError(6,0.08923599);
  h2_DDFakeWW->SetEntries(64);
  h2_DDFakeWW->SetStats(0);

  TH1 *hAllMC__WWjets = hAllMC1__WWjets->Rebin(nBins,"hAllMC__WWjets",xbin);   
  hAllMC__WWjets->Add(h2_DDFakeWW, -1);
  for(int i = 1; i <= hAllMC__WWjets->GetNbinsX(); i++){
    float Content = hAllMC__WWjets->GetBinContent(i);   
    float error   = hAllMC__WWjets->GetBinError(i);
    error = sqrt(error * error + sysLRMC * sysLRMC * Content * Content);
    hAllMC__WWjets->SetBinError(i, error);
  }



  ci = TColor::GetColor("#000066");
  hAllMC__WWjets->SetFillColor(ci);

  ci = TColor::GetColor("#000066");
  hAllMC__WWjets->SetLineColor(ci);
  hAllMC__WWjets->SetLineWidth(2);

  ci = TColor::GetColor("#000066");
  hAllMC__WWjets->SetMarkerColor(ci);
  hAllMC__WWjets->GetXaxis()->SetNdivisions(505);
  hAllMC__WWjets->GetXaxis()->SetLabelFont(42);
  hAllMC__WWjets->GetXaxis()->SetLabelSize(0.07);
  hAllMC__WWjets->GetXaxis()->SetTitleSize(0.07);
  hAllMC__WWjets->GetXaxis()->SetTitleOffset(1.1);
  hAllMC__WWjets->GetXaxis()->SetTitleFont(42);
  hAllMC__WWjets->GetYaxis()->SetNdivisions(505);
  hAllMC__WWjets->GetYaxis()->SetLabelFont(42);
  hAllMC__WWjets->GetYaxis()->SetLabelSize(0.07);
  hAllMC__WWjets->GetYaxis()->SetTitleSize(0.07);
  hAllMC__WWjets->GetYaxis()->SetTitleOffset(1.3);
  hAllMC__WWjets->GetYaxis()->SetTitleFont(42);
  hAllMC__WWjets->GetZaxis()->SetLabelFont(42);
  hAllMC__WWjets->GetZaxis()->SetLabelSize(0.035);
  hAllMC__WWjets->GetZaxis()->SetTitleSize(0.035);
  hAllMC__WWjets->GetZaxis()->SetTitleFont(42);

  Double_t xAxis6[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *hAllMC1__Higgs = new TH1D("hAllMC1__Higgs","",120, xAxis6);
  hAllMC1__Higgs->SetBinContent(43,0.01337266);
  hAllMC1__Higgs->SetBinContent(46,0.001729031);
  hAllMC1__Higgs->SetBinContent(52,0.007935048);
  hAllMC1__Higgs->SetBinContent(53,0.01137603);
  hAllMC1__Higgs->SetBinContent(55,0.007032728);
  hAllMC1__Higgs->SetBinContent(56,0.01597922);
  hAllMC1__Higgs->SetBinContent(59,0.005911685);
  hAllMC1__Higgs->SetBinContent(61,0.003370364);
  hAllMC1__Higgs->SetBinContent(65,0.006629134);
  hAllMC1__Higgs->SetBinContent(66,0.008651211);
  hAllMC1__Higgs->SetBinContent(69,0.002928242);
  hAllMC1__Higgs->SetBinContent(71,0.006608953);
  hAllMC1__Higgs->SetBinContent(76,0.01269569);
  hAllMC1__Higgs->SetBinContent(77,0.001087441);
  hAllMC1__Higgs->SetBinContent(78,0.006392532);
  hAllMC1__Higgs->SetBinContent(83,0.003251003);
  hAllMC1__Higgs->SetBinContent(88,0.004197098);
  hAllMC1__Higgs->SetBinContent(91,0.006036786);
  hAllMC1__Higgs->SetBinContent(94,0.007399905);
  hAllMC1__Higgs->SetBinContent(120,0.04141519);
  hAllMC1__Higgs->SetBinError(43,0.009468389);
  hAllMC1__Higgs->SetBinError(46,0.001729031);
  hAllMC1__Higgs->SetBinError(52,0.007935048);
  hAllMC1__Higgs->SetBinError(53,0.0091085);
  hAllMC1__Higgs->SetBinError(55,0.007032728);
  hAllMC1__Higgs->SetBinError(56,0.01023443);
  hAllMC1__Higgs->SetBinError(59,0.005911685);
  hAllMC1__Higgs->SetBinError(61,0.003370364);
  hAllMC1__Higgs->SetBinError(65,0.006629134);
  hAllMC1__Higgs->SetBinError(66,0.008651211);
  hAllMC1__Higgs->SetBinError(69,0.002928242);
  hAllMC1__Higgs->SetBinError(71,0.006608953);
  hAllMC1__Higgs->SetBinError(76,0.008672669);
  hAllMC1__Higgs->SetBinError(77,0.001087441);
  hAllMC1__Higgs->SetBinError(78,0.006392532);
  hAllMC1__Higgs->SetBinError(83,0.003251003);
  hAllMC1__Higgs->SetBinError(88,0.004197098);
  hAllMC1__Higgs->SetBinError(91,0.006036786);
  hAllMC1__Higgs->SetBinError(94,0.007399905);
  hAllMC1__Higgs->SetBinError(120,0.01709664);
  hAllMC1__Higgs->SetBinError(121,0.01709664);
  hAllMC1__Higgs->SetEntries(44);
  hAllMC1__Higgs->SetStats(0);


  Double_t xAxis17[7] = {0, 20, 40, 50, 70, 90, 120}; 
   
  TH1D *h2_DDFakeHiggs = new TH1D("h2_DDFakeHiggs","",6, xAxis17);
  h2_DDFakeHiggs->SetBinContent(1,0.09602849);
  h2_DDFakeHiggs->SetBinContent(2,0.08100007);
  h2_DDFakeHiggs->SetBinContent(3,0.01510169);
  h2_DDFakeHiggs->SetBinContent(4,0.06981367);
  h2_DDFakeHiggs->SetBinContent(5,0.03423271);
  h2_DDFakeHiggs->SetBinContent(6,0.05485188);
  h2_DDFakeHiggs->SetBinError(1,0.0248912);
  h2_DDFakeHiggs->SetBinError(2,0.02402564);
  h2_DDFakeHiggs->SetBinError(3,0.009624964);
  h2_DDFakeHiggs->SetBinError(4,0.02176702);
  h2_DDFakeHiggs->SetBinError(5,0.01375228);
  h2_DDFakeHiggs->SetBinError(6,0.01958307);
  h2_DDFakeHiggs->SetEntries(81);
  h2_DDFakeHiggs->SetStats(0);

  TH1 *hAllMC__Higgs = hAllMC1__Higgs->Rebin(nBins,"hAllMC__Higgs",xbin);   
  hAllMC__Higgs->Add(h2_DDFakeHiggs, -1);

  for(int i = 1; i <= hAllMC__Higgs->GetNbinsX(); i++){
    float Content = hAllMC__Higgs->GetBinContent(i);   
    float error   = hAllMC__Higgs->GetBinError(i);
    error = sqrt(error * error + sysLRMC * sysLRMC * Content * Content);
    hAllMC__Higgs->SetBinError(i, error);
  }


  ci = TColor::GetColor("#ff0000");
  hAllMC__Higgs->SetFillColor(ci);

  ci = TColor::GetColor("#ff0000");
  hAllMC__Higgs->SetLineColor(ci);
  hAllMC__Higgs->SetLineWidth(2);

  ci = TColor::GetColor("#ff0000");
  hAllMC__Higgs->SetMarkerColor(ci);
  hAllMC__Higgs->GetXaxis()->SetNdivisions(505);
  hAllMC__Higgs->GetXaxis()->SetLabelFont(42);
  hAllMC__Higgs->GetXaxis()->SetLabelSize(0.07);
  hAllMC__Higgs->GetXaxis()->SetTitleSize(0.07);
  hAllMC__Higgs->GetXaxis()->SetTitleOffset(1.1);
  hAllMC__Higgs->GetXaxis()->SetTitleFont(42);
  hAllMC__Higgs->GetYaxis()->SetNdivisions(505);
  hAllMC__Higgs->GetYaxis()->SetLabelFont(42);
  hAllMC__Higgs->GetYaxis()->SetLabelSize(0.07);
  hAllMC__Higgs->GetYaxis()->SetTitleSize(0.07);
  hAllMC__Higgs->GetYaxis()->SetTitleOffset(1.3);
  hAllMC__Higgs->GetYaxis()->SetTitleFont(42);
  hAllMC__Higgs->GetZaxis()->SetLabelFont(42);
  hAllMC__Higgs->GetZaxis()->SetLabelSize(0.035);
  hAllMC__Higgs->GetZaxis()->SetTitleSize(0.035);
  hAllMC__Higgs->GetZaxis()->SetTitleFont(42);
  
  Double_t xAxis18[7] = {0, 20, 40, 50, 70, 90, 120}; 
   
  TH1D *h2_DDFake = new TH1D("h2_DDFake","",6, xAxis18);
  h2_DDFake->SetBinContent(1,36.19324);
  h2_DDFake->SetBinContent(2,24.74516);
  h2_DDFake->SetBinContent(3,18.05728);
  h2_DDFake->SetBinContent(4,26.12208);
  h2_DDFake->SetBinContent(5,14.57565);
  h2_DDFake->SetBinContent(6,6.825574);
  h2_DDFake->SetBinError(1,11.23974);
  h2_DDFake->SetBinError(2,8.117189);
  h2_DDFake->SetBinError(3,6.622936);
  h2_DDFake->SetBinError(4,8.631712);
  h2_DDFake->SetBinError(5,6.244837);
  h2_DDFake->SetBinError(6,3.871143);
  h2_DDFake->SetMinimum(0.1);
  h2_DDFake->SetMaximum(200.0);
  h2_DDFake->SetEntries(320);
  h2_DDFake->SetStats(0);
  //Int_t ci;   // for color index setting
  ci = TColor::GetColor("#cccc00");
  h2_DDFake->SetFillColor(417);

  ci = TColor::GetColor("#cccc00");
  h2_DDFake->SetLineColor(417);
  h2_DDFake->SetLineWidth(2);

  ci = TColor::GetColor("#cccc00");
  h2_DDFake->SetMarkerColor(ci);
  h2_DDFake->GetXaxis()->SetNdivisions(505);
  h2_DDFake->GetXaxis()->SetLabelFont(42);
  h2_DDFake->GetXaxis()->SetLabelSize(0.07);
  h2_DDFake->GetXaxis()->SetTitleSize(0.07);
  h2_DDFake->GetXaxis()->SetTitleOffset(1.1);
  h2_DDFake->GetXaxis()->SetTitleFont(42);
  h2_DDFake->GetYaxis()->SetNdivisions(505);
  h2_DDFake->GetYaxis()->SetLabelFont(42);
  h2_DDFake->GetYaxis()->SetLabelSize(0.07);
  h2_DDFake->GetYaxis()->SetTitleSize(0.07);
  h2_DDFake->GetYaxis()->SetTitleOffset(1.3);
  h2_DDFake->GetYaxis()->SetTitleFont(42);
  h2_DDFake->GetZaxis()->SetLabelFont(42);
  h2_DDFake->GetZaxis()->SetLabelSize(0.035);
  h2_DDFake->GetZaxis()->SetTitleSize(0.035);
  h2_DDFake->GetZaxis()->SetTitleFont(42);





  h_stack->Add(hAllMC__Higgs,"");
  h_stack->Add(hAllMC__WWjets,"");
  h_stack->Add(hAllMC__Top,"");
  h_stack->Add(hAllMC__Zjets,"");
  h_stack->Add(h2_DDFake,"");

  h__MC->Add(hAllMC__Top);
  h__MC->Add(hAllMC__Zjets);
  h__MC->Add(hAllMC__WWjets);
  h__MC->Add(hAllMC__Higgs);
  h__MC->Add(h2_DDFake);

  h_stack->GetXaxis()->SetRangeUser(40,120);
  h_stack->GetYaxis()->SetRangeUser(0.02,120);

  h_stack->Draw("hist");

  h__MC->SetLineColor(kWhite);
  h__MC->SetFillColor(kBlack);
  h__MC->SetFillStyle(3004);
  h__MC->Draw("E2 SAME");

  Double_t xAxis7[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *h21_copyAll = new TH1D("h21_copyAll","",120, xAxis7);
  h21_copyAll->SetBinContent(41,1);
  h21_copyAll->SetBinContent(42,5);
  h21_copyAll->SetBinContent(44,5);
  h21_copyAll->SetBinContent(45,1);
  h21_copyAll->SetBinContent(47,1);
  h21_copyAll->SetBinContent(48,3);
  h21_copyAll->SetBinContent(49,1);
  h21_copyAll->SetBinContent(51,2);
  h21_copyAll->SetBinContent(52,2);
  h21_copyAll->SetBinContent(54,2);
  h21_copyAll->SetBinContent(55,3);
  h21_copyAll->SetBinContent(56,2);
  h21_copyAll->SetBinContent(57,1);
  h21_copyAll->SetBinContent(58,1);
  h21_copyAll->SetBinContent(59,3);
  h21_copyAll->SetBinContent(60,2);
  h21_copyAll->SetBinContent(61,2);
  h21_copyAll->SetBinContent(62,1);
  h21_copyAll->SetBinContent(63,2);
  h21_copyAll->SetBinContent(64,1);
  h21_copyAll->SetBinContent(65,1);
  h21_copyAll->SetBinContent(66,1);
  h21_copyAll->SetBinContent(67,5);
  h21_copyAll->SetBinContent(68,2);
  h21_copyAll->SetBinContent(69,2);
  h21_copyAll->SetBinContent(70,1);
  h21_copyAll->SetBinContent(71,2);
  h21_copyAll->SetBinContent(72,1);
  h21_copyAll->SetBinContent(73,2);
  h21_copyAll->SetBinContent(74,2);
  h21_copyAll->SetBinContent(77,4);
  h21_copyAll->SetBinContent(78,3);
  h21_copyAll->SetBinContent(79,1);
  h21_copyAll->SetBinContent(80,1);
  h21_copyAll->SetBinContent(85,1);
  h21_copyAll->SetBinContent(89,1);
  h21_copyAll->SetBinContent(91,2);
  h21_copyAll->SetBinContent(97,1);
  h21_copyAll->SetBinContent(98,1);
  h21_copyAll->SetBinContent(120,1);
  h21_copyAll->SetBinError(41,1);
  h21_copyAll->SetBinError(42,2.236068);
  h21_copyAll->SetBinError(44,2.236068);
  h21_copyAll->SetBinError(45,1);
  h21_copyAll->SetBinError(47,1);
  h21_copyAll->SetBinError(48,1.732051);
  h21_copyAll->SetBinError(49,1);
  h21_copyAll->SetBinError(51,1.414214);
  h21_copyAll->SetBinError(52,1.414214);
  h21_copyAll->SetBinError(54,1.414214);
  h21_copyAll->SetBinError(55,1.732051);
  h21_copyAll->SetBinError(56,1.414214);
  h21_copyAll->SetBinError(57,1);
  h21_copyAll->SetBinError(58,1);
  h21_copyAll->SetBinError(59,1.732051);
  h21_copyAll->SetBinError(60,1.414214);
  h21_copyAll->SetBinError(61,1.414214);
  h21_copyAll->SetBinError(62,1);
  h21_copyAll->SetBinError(63,1.414214);
  h21_copyAll->SetBinError(64,1);
  h21_copyAll->SetBinError(65,1);
  h21_copyAll->SetBinError(66,1);
  h21_copyAll->SetBinError(67,2.236068);
  h21_copyAll->SetBinError(68,1.414214);
  h21_copyAll->SetBinError(69,1.414214);
  h21_copyAll->SetBinError(70,1);
  h21_copyAll->SetBinError(71,1.414214);
  h21_copyAll->SetBinError(72,1);
  h21_copyAll->SetBinError(73,1.414214);
  h21_copyAll->SetBinError(74,1.414214);
  h21_copyAll->SetBinError(77,2);
  h21_copyAll->SetBinError(78,1.732051);
  h21_copyAll->SetBinError(79,1);
  h21_copyAll->SetBinError(80,1);
  h21_copyAll->SetBinError(85,1);
  h21_copyAll->SetBinError(89,1);
  h21_copyAll->SetBinError(91,1.414214);
  h21_copyAll->SetBinError(97,1);
  h21_copyAll->SetBinError(98,1);
  h21_copyAll->SetBinError(120,1);
  h21_copyAll->SetBinError(121,1);
  h21_copyAll->SetMinimum(0.1);
  h21_copyAll->SetMaximum(200.0);
  h21_copyAll->SetEntries(92);
  h21_copyAll->SetStats(0);
  h21_copyAll->SetLineWidth(2);
  h21_copyAll->SetMarkerStyle(20);
  h21_copyAll->GetXaxis()->SetNdivisions(505);
  h21_copyAll->GetXaxis()->SetLabelFont(42);
  h21_copyAll->GetXaxis()->SetLabelSize(0.07);
  h21_copyAll->GetXaxis()->SetTitleSize(0.07);
  h21_copyAll->GetXaxis()->SetTitleOffset(1.1);
  h21_copyAll->GetXaxis()->SetTitleFont(42);
  h21_copyAll->GetYaxis()->SetNdivisions(505);
  h21_copyAll->GetYaxis()->SetLabelFont(42);
  h21_copyAll->GetYaxis()->SetLabelSize(0.07);
  h21_copyAll->GetYaxis()->SetTitleSize(0.07);
  h21_copyAll->GetYaxis()->SetTitleOffset(1.3);
  h21_copyAll->GetYaxis()->SetTitleFont(42);
  h21_copyAll->GetZaxis()->SetLabelFont(42);
  h21_copyAll->GetZaxis()->SetLabelSize(0.035);
  h21_copyAll->GetZaxis()->SetTitleSize(0.035);
  h21_copyAll->GetZaxis()->SetTitleFont(42);

  TH1 *h2_copyAll =h21_copyAll ->Rebin(nBins,"h2_copyAll",xbin);   
 
  h2_copyAll->Draw("sameE");
  Double_t xAxis8[121] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120}; 
   
  TH1D *h_susy = new TH1D("h_susy","",120, xAxis8);
  h_susy->SetBinContent(41,0.02981107);
  h_susy->SetBinContent(42,0.02547251);
  h_susy->SetBinContent(43,0.0321018);
  h_susy->SetBinContent(44,0.01153787);
  h_susy->SetBinContent(45,0.0237574);
  h_susy->SetBinContent(46,0.01761908);
  h_susy->SetBinContent(47,0.0608797);
  h_susy->SetBinContent(48,0.01469702);
  h_susy->SetBinContent(49,0.01332659);
  h_susy->SetBinContent(50,0.01941999);
  h_susy->SetBinContent(51,0.01244827);
  h_susy->SetBinContent(52,0.02792488);
  h_susy->SetBinContent(53,0.01410447);
  h_susy->SetBinContent(54,0.008745746);
  h_susy->SetBinContent(55,0.02486471);
  h_susy->SetBinContent(56,0.003693621);
  h_susy->SetBinContent(57,0.02120006);
  h_susy->SetBinContent(58,0.01568861);
  h_susy->SetBinContent(59,0.01241162);
  h_susy->SetBinContent(60,0.04115072);
  h_susy->SetBinContent(61,0.03129637);
  h_susy->SetBinContent(62,0.01113149);
  h_susy->SetBinContent(63,0.03421569);
  h_susy->SetBinContent(64,0.02178499);
  h_susy->SetBinContent(65,0.04238544);
  h_susy->SetBinContent(66,0.02651663);
  h_susy->SetBinContent(67,0.01542877);
  h_susy->SetBinContent(68,0.01866563);
  h_susy->SetBinContent(69,0.01211454);
  h_susy->SetBinContent(70,0.02921209);
  h_susy->SetBinContent(71,0.02761166);
  h_susy->SetBinContent(72,0.02265524);
  h_susy->SetBinContent(73,0.02223045);
  h_susy->SetBinContent(74,0.04453483);
  h_susy->SetBinContent(75,0.03941722);
  h_susy->SetBinContent(76,0.01306253);
  h_susy->SetBinContent(77,0.01777583);
  h_susy->SetBinContent(78,0.02061051);
  h_susy->SetBinContent(79,0.01306355);
  h_susy->SetBinContent(80,0.05890387);
  h_susy->SetBinContent(81,0.02184866);
  h_susy->SetBinContent(82,0.01310389);
  h_susy->SetBinContent(83,0.02322609);
  h_susy->SetBinContent(84,0.03007971);
  h_susy->SetBinContent(85,0.02493482);
  h_susy->SetBinContent(86,0.01955588);
  h_susy->SetBinContent(87,0.07634642);
  h_susy->SetBinContent(88,0.03130011);
  h_susy->SetBinContent(89,0.01489701);
  h_susy->SetBinContent(90,0.03789995);
  h_susy->SetBinContent(91,0.01769642);
  h_susy->SetBinContent(92,0.0132456);
  h_susy->SetBinContent(93,0.03691686);
  h_susy->SetBinContent(94,0.02272706);
  h_susy->SetBinContent(95,0.05819813);
  h_susy->SetBinContent(96,0.01801376);
  h_susy->SetBinContent(97,0.0259257);
  h_susy->SetBinContent(98,0.03682354);
  h_susy->SetBinContent(99,0.02235758);
  h_susy->SetBinContent(100,0.01289226);
  h_susy->SetBinContent(101,0.03855452);
  h_susy->SetBinContent(102,0.01919948);
  h_susy->SetBinContent(103,0.0367674);
  h_susy->SetBinContent(104,0.01708189);
  h_susy->SetBinContent(105,0.0378577);
  h_susy->SetBinContent(106,0.03264016);
  h_susy->SetBinContent(107,0.00990484);
  h_susy->SetBinContent(108,0.02152005);
  h_susy->SetBinContent(109,0.02243599);
  h_susy->SetBinContent(110,0.04709231);
  h_susy->SetBinContent(111,0.02029404);
  h_susy->SetBinContent(112,0.03525075);
  h_susy->SetBinContent(113,0.03099814);
  h_susy->SetBinContent(114,0.04787149);
  h_susy->SetBinContent(115,0.004938853);
  h_susy->SetBinContent(116,0.01155108);
  h_susy->SetBinContent(117,0.0153638);
  h_susy->SetBinContent(118,0.02625852);
  h_susy->SetBinContent(119,0.02903709);
  h_susy->SetBinContent(120,1.387671);
  h_susy->SetBinError(41,0.01783435);
  h_susy->SetBinError(42,0.01289369);
  h_susy->SetBinError(43,0.01068377);
  h_susy->SetBinError(44,0.006021767);
  h_susy->SetBinError(45,0.008687249);
  h_susy->SetBinError(46,0.01077276);
  h_susy->SetBinError(47,0.0249924);
  h_susy->SetBinError(48,0.007486638);
  h_susy->SetBinError(49,0.007707909);
  h_susy->SetBinError(50,0.008527236);
  h_susy->SetBinError(51,0.006325502);
  h_susy->SetBinError(52,0.009073258);
  h_susy->SetBinError(53,0.007245111);
  h_susy->SetBinError(54,0.00625553);
  h_susy->SetBinError(55,0.0093573);
  h_susy->SetBinError(56,0.003215922);
  h_susy->SetBinError(57,0.01230898);
  h_susy->SetBinError(58,0.008045418);
  h_susy->SetBinError(59,0.006545952);
  h_susy->SetBinError(60,0.01531974);
  h_susy->SetBinError(61,0.01136883);
  h_susy->SetBinError(62,0.007627226);
  h_susy->SetBinError(63,0.01334336);
  h_susy->SetBinError(64,0.007496541);
  h_susy->SetBinError(65,0.0183946);
  h_susy->SetBinError(66,0.0150239);
  h_susy->SetBinError(67,0.006284307);
  h_susy->SetBinError(68,0.007854545);
  h_susy->SetBinError(69,0.005833448);
  h_susy->SetBinError(70,0.0121536);
  h_susy->SetBinError(71,0.01316839);
  h_susy->SetBinError(72,0.0115973);
  h_susy->SetBinError(73,0.01225886);
  h_susy->SetBinError(74,0.01813785);
  h_susy->SetBinError(75,0.01723607);
  h_susy->SetBinError(76,0.00564326);
  h_susy->SetBinError(77,0.01111248);
  h_susy->SetBinError(78,0.008120017);
  h_susy->SetBinError(79,0.005482235);
  h_susy->SetBinError(80,0.02186817);
  h_susy->SetBinError(81,0.01160585);
  h_susy->SetBinError(82,0.009000666);
  h_susy->SetBinError(83,0.01322817);
  h_susy->SetBinError(84,0.01499874);
  h_susy->SetBinError(85,0.008950654);
  h_susy->SetBinError(86,0.01023219);
  h_susy->SetBinError(87,0.02541277);
  h_susy->SetBinError(88,0.01211182);
  h_susy->SetBinError(89,0.00667633);
  h_susy->SetBinError(90,0.01729061);
  h_susy->SetBinError(91,0.006702894);
  h_susy->SetBinError(92,0.006304382);
  h_susy->SetBinError(93,0.01315181);
  h_susy->SetBinError(94,0.009221731);
  h_susy->SetBinError(95,0.02407914);
  h_susy->SetBinError(96,0.01075652);
  h_susy->SetBinError(97,0.01122412);
  h_susy->SetBinError(98,0.0150897);
  h_susy->SetBinError(99,0.009704987);
  h_susy->SetBinError(100,0.005475619);
  h_susy->SetBinError(101,0.02033984);
  h_susy->SetBinError(102,0.0167151);
  h_susy->SetBinError(103,0.01589272);
  h_susy->SetBinError(104,0.006723833);
  h_susy->SetBinError(105,0.01309888);
  h_susy->SetBinError(106,0.01227876);
  h_susy->SetBinError(107,0.005276409);
  h_susy->SetBinError(108,0.01227607);
  h_susy->SetBinError(109,0.007380695);
  h_susy->SetBinError(110,0.01634549);
  h_susy->SetBinError(111,0.009334832);
  h_susy->SetBinError(112,0.01286574);
  h_susy->SetBinError(113,0.01179897);
  h_susy->SetBinError(114,0.0199673);
  h_susy->SetBinError(115,0.003182229);
  h_susy->SetBinError(116,0.005612347);
  h_susy->SetBinError(117,0.007364952);
  h_susy->SetBinError(118,0.01089479);
  h_susy->SetBinError(119,0.01335339);
  h_susy->SetBinError(120,0.0878371);
  h_susy->SetBinError(121,0.0865969);
  h_susy->SetEntries(1021);
  h_susy->SetLineStyle(3);
  h_susy->SetLineWidth(4);
  h_susy->GetXaxis()->SetNdivisions(505);
  h_susy->GetXaxis()->SetLabelFont(42);
  h_susy->GetXaxis()->SetLabelSize(0.07);
  h_susy->GetXaxis()->SetTitleSize(0.07);
  h_susy->GetXaxis()->SetTitleOffset(1.1);
  h_susy->GetXaxis()->SetTitleFont(42);
  h_susy->GetYaxis()->SetNdivisions(505);
  h_susy->GetYaxis()->SetLabelFont(42);
  h_susy->GetYaxis()->SetLabelSize(0.07);
  h_susy->GetYaxis()->SetTitleSize(0.07);
  h_susy->GetYaxis()->SetTitleOffset(1.3);
  h_susy->GetYaxis()->SetTitleFont(42);
  h_susy->GetZaxis()->SetLabelFont(42);
  h_susy->GetZaxis()->SetLabelSize(0.035);
  h_susy->GetZaxis()->SetTitleSize(0.035);
  h_susy->GetZaxis()->SetTitleFont(42);
  TH1 *h1_susy = h_susy->Rebin(nBins,"h1_susy",xbin);   

  h1_susy->Draw("samehist");
  TLatex *   tex = new TLatex(0.1,0.943,"Preselection, m_{T}^{#tau} > 200 GeV");
  tex->SetNDC();
  tex->SetTextSize(0.03);
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(0.68,0.943,"#sqrt{s} = 8 TeV, L = 19.6 fb^{-1}");
  tex->SetNDC();
  tex->SetTextSize(0.0305);
  tex->SetLineWidth(2);
  tex->Draw();
   
  tex = new TLatex(0.24,0.850,"CMS Preliminary");
  tex->SetNDC();
  tex->SetTextSize(0.05);
  tex->SetLineWidth(2);
  tex->Draw();
   
  tex = new TLatex(0.26,0.80,"#mu#tau");
  tex->SetNDC();
  tex->SetTextSize(0.05);
  tex->SetLineWidth(2);
  tex->Draw();

     

   
  TLegend *leg = new TLegend(0.66,0.66,0.91,0.92,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(62);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  TLegendEntry *entry;
  entry=leg->AddEntry(h2_copyAll,"data","pl");
  entry=leg->AddEntry(h2_DDFake,"W","f");
  entry=leg->AddEntry(hAllMC__Zjets,"ZX","f");
  entry=leg->AddEntry(hAllMC__Top,"Top","f");
  entry=leg->AddEntry(hAllMC__WWjets,"WW","f");
  entry=leg->AddEntry(hAllMC__Higgs,"Higgs","f");
  entry=leg->AddEntry(h__MC,"Uncertainties","f");
  entry=leg->AddEntry(h1_susy,"SUSY(380,1)","f");

  leg->Draw();

}

// void Plot2(){
  
//   // ------------>Primitives in pad: muTau_log_comp_overlay_ratiopad
//   muTau_log_comp_overlay_ratiopad = new TPad("muTau_log_comp_overlay_ratiopad", "Pad containing the ratio",0,0.01863354,0.9967105,0.2189441);
//   muTau_log_comp_overlay_ratiopad->Draw();
//   muTau_log_comp_overlay_ratiopad->cd();
//   muTau_log_comp_overlay_ratiopad->Range(-20.26901,-0.8571431,131.3732,2.214286);
//   muTau_log_comp_overlay_ratiopad->SetFillColor(0);
//   muTau_log_comp_overlay_ratiopad->SetBorderMode(0);
//   muTau_log_comp_overlay_ratiopad->SetBorderSize(2);
//   muTau_log_comp_overlay_ratiopad->SetLeftMargin(0.1336634);
//   muTau_log_comp_overlay_ratiopad->SetRightMargin(0.075);
//   muTau_log_comp_overlay_ratiopad->SetTopMargin(0.06976745);
//   muTau_log_comp_overlay_ratiopad->SetBottomMargin(0.2790698);
//   muTau_log_comp_overlay_ratiopad->SetFrameLineWidth(3);
//   muTau_log_comp_overlay_ratiopad->SetFrameBorderMode(0);
//   muTau_log_comp_overlay_ratiopad->SetFrameBorderSize(0);
//   muTau_log_comp_overlay_ratiopad->SetFrameLineWidth(3);
//   muTau_log_comp_overlay_ratiopad->SetFrameBorderMode(0);
//   muTau_log_comp_overlay_ratiopad->SetFrameBorderSize(0);

//   TH1F *h1_copy  = (TH1F*)h__MC->Clone();
//   h1_copy->Divide(h1_copy);

//   h1_copy->SetMinimum(0);
//   h1_copy->SetMaximum(2);
//   h1_copy->SetStats(0);
//   h1_copy->SetFillColor(1);
//   h1_copy->SetFillStyle(3004);
//   h1_copy->SetLineWidth(2);
//   h1_copy->GetXaxis()->SetTitle("M_{T2}");
//   h1_copy->GetXaxis()->SetNdivisions(505);
//   h1_copy->GetXaxis()->SetLabelFont(42);
//   h1_copy->GetXaxis()->SetLabelSize(0);
//   h1_copy->GetXaxis()->SetTitleSize(0.2);
//   h1_copy->GetXaxis()->SetTickLength(0.09);
//   h1_copy->GetXaxis()->SetTitleOffset(0.5);
//   h1_copy->GetXaxis()->SetTitleFont(42);
//   h1_copy->GetYaxis()->SetTitle("Data / MC");
//   h1_copy->GetYaxis()->SetNdivisions(509);
//   h1_copy->GetYaxis()->SetLabelFont(42);
//   h1_copy->GetYaxis()->SetLabelSize(0.19);
//   h1_copy->GetYaxis()->SetTitleSize(0.18);
//   h1_copy->GetYaxis()->SetTitleOffset(0.36);
//   h1_copy->GetYaxis()->SetTitleFont(42);
//   h1_copy->GetZaxis()->SetLabelFont(42);
//   h1_copy->GetZaxis()->SetLabelSize(0.035);
//   h1_copy->GetZaxis()->SetTitleSize(0.035);
//   h1_copy->GetZaxis()->SetTitleFont(42);
//   h1_copy->GetXaxis()->SetRangeUser(40,120);

//   h1_copy->Draw("E2");

//   TH1F *h2_copy__2  = (TH1F*)h2_copyAll->Clone();
//   h2_copy__2->Divide(h__MC);
//   h2_copy__2->SetMinimum(0.4);
//   h2_copy__2->SetMaximum(3);
//   h2_copy__2->SetEntries(2.397098);
//   h2_copy__2->SetDirectory(0);
//   h2_copy__2->SetStats(0);
//   h2_copy__2->SetLineWidth(2);
//   h2_copy__2->SetMarkerStyle(20);
//   h2_copy__2->GetXaxis()->SetNdivisions(505);
//   h2_copy__2->GetXaxis()->SetLabelFont(42);
//   h2_copy__2->GetXaxis()->SetLabelSize(0.07);
//   h2_copy__2->GetXaxis()->SetTitleSize(0.07);
//   h2_copy__2->GetXaxis()->SetTitleOffset(1.1);
//   h2_copy__2->GetXaxis()->SetTitleFont(42);
//   h2_copy__2->GetYaxis()->SetNdivisions(505);
//   h2_copy__2->GetYaxis()->SetLabelFont(42);
//   h2_copy__2->GetYaxis()->SetLabelSize(0.07);
//   h2_copy__2->GetYaxis()->SetTitleSize(0.07);
//   h2_copy__2->GetYaxis()->SetTitleOffset(1.3);
//   h2_copy__2->GetYaxis()->SetTitleFont(42);
//   h2_copy__2->GetZaxis()->SetLabelFont(42);
//   h2_copy__2->GetZaxis()->SetLabelSize(0.035);
//   h2_copy__2->GetZaxis()->SetTitleSize(0.035);
//   h2_copy__2->GetZaxis()->SetTitleFont(42);
//   h2_copy__2->Draw("Esame");
//   TLine *line = new TLine(40,1,120,1);
//   line->SetLineStyle(7);
//   line->SetLineWidth(2);
//   line->Draw();
 

//   muTau_log_comp_overlay_ratiopad->Modified();
//   muTau_log_comp_overlayc_ratio->cd();
//   muTau_log_comp_overlayc_ratio->Modified();
//   muTau_log_comp_overlayc_ratio->cd();
//   muTau_log_comp_overlayc_ratio->SetSelected(muTau_log_comp_overlayc_ratio);

// }


