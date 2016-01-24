{
//=========Macro generated from canvas: MT2_ratioc_ratio/
//=========  (Sat Dec  5 11:26:55 2015) by ROOT version5.34/03
   TCanvas *MT2_ratioc_ratio = new TCanvas("QCDWestimation_bin2", "",1,52,600,600);
   gStyle->SetOptFit(1);
   MT2_ratioc_ratio->Range(0,0,1,1);
   MT2_ratioc_ratio->SetFillColor(0);
   MT2_ratioc_ratio->SetBorderMode(0);
   MT2_ratioc_ratio->SetBorderSize(2);
   MT2_ratioc_ratio->SetLeftMargin(0.13);
   MT2_ratioc_ratio->SetRightMargin(0.08);
   MT2_ratioc_ratio->SetTopMargin(0.07);
   MT2_ratioc_ratio->SetBottomMargin(0.13);
   MT2_ratioc_ratio->SetFrameLineWidth(3);
   MT2_ratioc_ratio->SetFrameBorderMode(0);
   MT2_ratioc_ratio->SetFrameBorderSize(0);

   MT2_ratioc_ratio->SetLogy();

// // ------------>Primitives in pad: MT2_ratio_plotpad
//    TPad *MT2_ratio_plotpad = new TPad("MT2_ratio_plotpad", "Pad containing the overlay plot",0,0,1,1); //.211838
//    MT2_ratio_plotpad->Draw();
//    MT2_ratio_plotpad->cd();
//    MT2_ratio_plotpad->Range(66.62215,-2.606783,320.2937,3.16839);
//    MT2_ratio_plotpad->SetFillColor(0);
//    MT2_ratio_plotpad->SetFillStyle(4000);
//    MT2_ratio_plotpad->SetBorderMode(0);
//    MT2_ratio_plotpad->SetBorderSize(2);
//    MT2_ratio_plotpad->SetLogy();
//    MT2_ratio_plotpad->SetLeftMargin(0.131579);
//    MT2_ratio_plotpad->SetRightMargin(0.08);
//    MT2_ratio_plotpad->SetTopMargin(0.06895515);
//    MT2_ratio_plotpad->SetBottomMargin(0.15); //07206074
//    MT2_ratio_plotpad->SetFrameLineWidth(3);
//    MT2_ratio_plotpad->SetFrameBorderMode(0);
//    MT2_ratio_plotpad->SetFrameBorderSize(0);
//    MT2_ratio_plotpad->SetFrameLineWidth(3);
//    MT2_ratio_plotpad->SetFrameBorderMode(0);
//    MT2_ratio_plotpad->SetFrameBorderSize(0);
  
  
   THStack *MT2 = new THStack();
   MT2->SetName("MT2");
   MT2->SetTitle("");
   MT2->SetMinimum(0.1);
   MT2->SetMaximum(1000);
   
   TH1F *MT2_stack_1_stack_1_stack_1_stack_1 = new TH1F("MT2_stack_1_stack_1_stack_1_stack_1","",4,100,300);
   MT2_stack_1_stack_1_stack_1_stack_1->SetMinimum(0.1);
   MT2_stack_1_stack_1_stack_1_stack_1->SetMaximum(1000);
   MT2_stack_1_stack_1_stack_1_stack_1->SetDirectory(0);
   MT2_stack_1_stack_1_stack_1_stack_1->SetStats(0);
   MT2_stack_1_stack_1_stack_1_stack_1->SetLineWidth(2);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetNdivisions(505);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetLabelSize(0.05);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetTitleSize(0.05);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1.1);
   MT2_stack_1_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetTitle("Events");
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetNdivisions(505);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetLabelSize(0.05);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetTitleSize(0.05);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetTitleOffset(1.3);
   MT2_stack_1_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   MT2_stack_1_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   MT2_stack_1_stack_1_stack_1_stack_1->GetZaxis()->SetLabelSize(0.035);
   MT2_stack_1_stack_1_stack_1_stack_1->GetZaxis()->SetTitleSize(0.035);
   MT2_stack_1_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   MT2->SetHistogram(MT2_stack_1_stack_1_stack_1_stack_1);
   
  


    Double_t xAxis1[5] = {100, 150, 200, 250, 300}; 
    TH1D *h__MC2 = new TH1D("h__MC2","",4, xAxis1);
   
   TH1D *MT2_Higgs = new TH1D("MT2_Higgs","",4, xAxis1);
   MT2_Higgs->SetBinContent(1,0.07092376);
   MT2_Higgs->SetBinContent(2,0.318799);
   MT2_Higgs->SetBinContent(3,0.07742545);
   MT2_Higgs->SetBinContent(4,0.07488839);
   MT2_Higgs->SetBinError(1,0.04990565);
   MT2_Higgs->SetBinError(2,0.1784332);
   MT2_Higgs->SetBinError(3,0.05062611);
   MT2_Higgs->SetBinError(4,0.04417018);
   MT2_Higgs->SetEntries(86);
   MT2_Higgs->SetStats(0);
   MT2_Higgs->SetFillColor(2);
   MT2_Higgs->SetLineColor(2);
   MT2_Higgs->SetLineWidth(2);
   MT2_Higgs->SetMarkerColor(2);
   MT2_Higgs->GetXaxis()->SetNdivisions(505);
   MT2_Higgs->GetXaxis()->SetLabelFont(42);
   MT2_Higgs->GetXaxis()->SetLabelSize(0.07);
   MT2_Higgs->GetXaxis()->SetTitleSize(0.07);
   MT2_Higgs->GetXaxis()->SetTitleOffset(1.1);
   MT2_Higgs->GetXaxis()->SetTitleFont(42);
   MT2_Higgs->GetYaxis()->SetNdivisions(505);
   MT2_Higgs->GetYaxis()->SetLabelFont(42);
   MT2_Higgs->GetYaxis()->SetLabelSize(0.07);
   MT2_Higgs->GetYaxis()->SetTitleSize(0.07);
   MT2_Higgs->GetYaxis()->SetTitleOffset(1.3);
   MT2_Higgs->GetYaxis()->SetTitleFont(42);
   MT2_Higgs->GetZaxis()->SetLabelFont(42);
   MT2_Higgs->GetZaxis()->SetLabelSize(0.035);
   MT2_Higgs->GetZaxis()->SetTitleSize(0.035);
   MT2_Higgs->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_Higgs,"");
   Double_t xAxis2[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_WW = new TH1D("MT2_WW","",4, xAxis2);
   MT2_WW->SetBinContent(2,0.270886);
   MT2_WW->SetBinContent(3,0.4698851);
   MT2_WW->SetBinContent(4,0.1483787);
   MT2_WW->SetBinError(2,0.170654);
   MT2_WW->SetBinError(3,0.270473);
   MT2_WW->SetBinError(4,0.102007);
   MT2_WW->SetEntries(36);
   MT2_WW->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000066");
   MT2_WW->SetFillColor(ci);

   ci = TColor::GetColor("#000066");
   MT2_WW->SetLineColor(ci);
   MT2_WW->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   MT2_WW->SetMarkerColor(ci);
   MT2_WW->GetXaxis()->SetNdivisions(505);
   MT2_WW->GetXaxis()->SetLabelFont(42);
   MT2_WW->GetXaxis()->SetLabelSize(0.07);
   MT2_WW->GetXaxis()->SetTitleSize(0.07);
   MT2_WW->GetXaxis()->SetTitleOffset(1.1);
   MT2_WW->GetXaxis()->SetTitleFont(42);
   MT2_WW->GetYaxis()->SetNdivisions(505);
   MT2_WW->GetYaxis()->SetLabelFont(42);
   MT2_WW->GetYaxis()->SetLabelSize(0.07);
   MT2_WW->GetYaxis()->SetTitleSize(0.07);
   MT2_WW->GetYaxis()->SetTitleOffset(1.3);
   MT2_WW->GetYaxis()->SetTitleFont(42);
   MT2_WW->GetZaxis()->SetLabelFont(42);
   MT2_WW->GetZaxis()->SetLabelSize(0.035);
   MT2_WW->GetZaxis()->SetTitleSize(0.035);
   MT2_WW->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_WW,"");
   Double_t xAxis3[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_Top = new TH1D("MT2_Top","",4, xAxis3);
   MT2_Top->SetBinContent(2,0.2561433);
   MT2_Top->SetBinContent(3,0.001803654);
   MT2_Top->SetBinContent(4,0.5268298);
   MT2_Top->SetBinError(2,0.2863769);
   MT2_Top->SetBinError(3,0.002016546);
   MT2_Top->SetBinError(4,0.5890136);
   MT2_Top->SetEntries(55);
   MT2_Top->SetStats(0);

   ci = TColor::GetColor("#3366cc");
   MT2_Top->SetFillColor(ci);

   ci = TColor::GetColor("#3366cc");
   MT2_Top->SetLineColor(ci);
   MT2_Top->SetLineWidth(2);

   ci = TColor::GetColor("#3366cc");
   MT2_Top->SetMarkerColor(ci);
   MT2_Top->GetXaxis()->SetNdivisions(505);
   MT2_Top->GetXaxis()->SetLabelFont(42);
   MT2_Top->GetXaxis()->SetLabelSize(0.07);
   MT2_Top->GetXaxis()->SetTitleSize(0.07);
   MT2_Top->GetXaxis()->SetTitleOffset(1.1);
   MT2_Top->GetXaxis()->SetTitleFont(42);
   MT2_Top->GetYaxis()->SetNdivisions(505);
   MT2_Top->GetYaxis()->SetLabelFont(42);
   MT2_Top->GetYaxis()->SetLabelSize(0.07);
   MT2_Top->GetYaxis()->SetTitleSize(0.07);
   MT2_Top->GetYaxis()->SetTitleOffset(1.3);
   MT2_Top->GetYaxis()->SetTitleFont(42);
   MT2_Top->GetZaxis()->SetLabelFont(42);
   MT2_Top->GetZaxis()->SetLabelSize(0.035);
   MT2_Top->GetZaxis()->SetTitleSize(0.035);
   MT2_Top->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_Top,"");
   Double_t xAxis4[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_ZX = new TH1D("MT2_ZX","",4, xAxis4);
   MT2_ZX->SetBinContent(1,1.158208);
   MT2_ZX->SetBinContent(2,4.615497);
   MT2_ZX->SetBinContent(3,1.13796);
   MT2_ZX->SetBinContent(4,0.8086002);
   MT2_ZX->SetBinError(1,0.7376637);
   MT2_ZX->SetBinError(2,1.813091);
   MT2_ZX->SetBinError(3,0.4799247);
   MT2_ZX->SetBinError(4,0.5989162);
   MT2_ZX->SetBinError(5,0.01049275);
   MT2_ZX->SetEntries(207);
   MT2_ZX->SetStats(0);

   ci = TColor::GetColor("#006600");
   MT2_ZX->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   MT2_ZX->SetLineColor(ci);
   MT2_ZX->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   MT2_ZX->SetMarkerColor(ci);
   MT2_ZX->GetXaxis()->SetNdivisions(505);
   MT2_ZX->GetXaxis()->SetLabelFont(42);
   MT2_ZX->GetXaxis()->SetLabelSize(0.07);
   MT2_ZX->GetXaxis()->SetTitleSize(0.07);
   MT2_ZX->GetXaxis()->SetTitleOffset(1.1);
   MT2_ZX->GetXaxis()->SetTitleFont(42);
   MT2_ZX->GetYaxis()->SetNdivisions(505);
   MT2_ZX->GetYaxis()->SetLabelFont(42);
   MT2_ZX->GetYaxis()->SetLabelSize(0.07);
   MT2_ZX->GetYaxis()->SetTitleSize(0.07);
   MT2_ZX->GetYaxis()->SetTitleOffset(1.3);
   MT2_ZX->GetYaxis()->SetTitleFont(42);
   MT2_ZX->GetZaxis()->SetLabelFont(42);
   MT2_ZX->GetZaxis()->SetLabelSize(0.035);
   MT2_ZX->GetZaxis()->SetTitleSize(0.035);
   MT2_ZX->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_ZX,"");
   Double_t xAxis5[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_W = new TH1D("MT2_W","",4, xAxis5);
   MT2_W->SetBinContent(2,15.56548);
   MT2_W->SetBinContent(3,13.13984);
   MT2_W->SetBinContent(4,2.58335);
   MT2_W->SetBinError(2,5.872039);
   MT2_W->SetBinError(3,5.474625);
   MT2_W->SetBinError(4,1.29);
   MT2_W->SetEntries(64);
   MT2_W->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   MT2_W->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   MT2_W->SetLineColor(ci);
   MT2_W->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   MT2_W->SetMarkerColor(ci);
   MT2_W->GetXaxis()->SetNdivisions(505);
   MT2_W->GetXaxis()->SetLabelFont(42);
   MT2_W->GetXaxis()->SetLabelSize(0.07);
   MT2_W->GetXaxis()->SetTitleSize(0.07);
   MT2_W->GetXaxis()->SetTitleOffset(1.1);
   MT2_W->GetXaxis()->SetTitleFont(42);
   MT2_W->GetYaxis()->SetNdivisions(505);
   MT2_W->GetYaxis()->SetLabelFont(42);
   MT2_W->GetYaxis()->SetLabelSize(0.07);
   MT2_W->GetYaxis()->SetTitleSize(0.07);
   MT2_W->GetYaxis()->SetTitleOffset(1.3);
   MT2_W->GetYaxis()->SetTitleFont(42);
   MT2_W->GetZaxis()->SetLabelFont(42);
   MT2_W->GetZaxis()->SetLabelSize(0.035);
   MT2_W->GetZaxis()->SetTitleSize(0.035);
   MT2_W->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_W,"");
   Double_t xAxis6[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_QCD = new TH1D("MT2_QCD","",4, xAxis6);
   MT2_QCD->SetBinContent(1,11.748);
   MT2_QCD->SetBinContent(2,42.68843);
   MT2_QCD->SetBinContent(3,6.396727);
   MT2_QCD->SetBinContent(4,1.15);
   MT2_QCD->SetBinError(1,4.123398);
   MT2_QCD->SetBinError(2,9.416249);
   MT2_QCD->SetBinError(3,3.805273);
   MT2_QCD->SetBinError(4,0.85);
   MT2_QCD->SetEntries(84);
   MT2_QCD->SetStats(0);

   ci = TColor::GetColor("#cccc00");
   MT2_QCD->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   MT2_QCD->SetLineColor(ci);
   MT2_QCD->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   MT2_QCD->SetMarkerColor(ci);
   MT2_QCD->GetXaxis()->SetNdivisions(505);
   MT2_QCD->GetXaxis()->SetLabelFont(42);
   MT2_QCD->GetXaxis()->SetLabelSize(0.07);
   MT2_QCD->GetXaxis()->SetTitleSize(0.07);
   MT2_QCD->GetXaxis()->SetTitleOffset(1.1);
   MT2_QCD->GetXaxis()->SetTitleFont(42);
   MT2_QCD->GetYaxis()->SetNdivisions(505);
   MT2_QCD->GetYaxis()->SetLabelFont(42);
   MT2_QCD->GetYaxis()->SetLabelSize(0.07);
   MT2_QCD->GetYaxis()->SetTitleSize(0.07);
   MT2_QCD->GetYaxis()->SetTitleOffset(1.3);
   MT2_QCD->GetYaxis()->SetTitleFont(42);
   MT2_QCD->GetZaxis()->SetLabelFont(42);
   MT2_QCD->GetZaxis()->SetLabelSize(0.035);
   MT2_QCD->GetZaxis()->SetTitleSize(0.035);
   MT2_QCD->GetZaxis()->SetTitleFont(42);
   MT2->Add(MT2_QCD,"");
   MT2->Draw("hist");
   Double_t xAxis7[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *h2_copy = new TH1D("h2_copy","",4, xAxis7);
   h2_copy->SetBinContent(1,15);
   h2_copy->SetBinContent(2,64);
   h2_copy->SetBinContent(3,13);
   h2_copy->SetBinContent(4,2);
   h2_copy->SetBinError(1,3.872983);
   h2_copy->SetBinError(2,8);
   h2_copy->SetBinError(3,3.605551);
   h2_copy->SetBinError(4,1.414214);
   h2_copy->SetMinimum(0.1);
   h2_copy->SetMaximum(1000);
   h2_copy->SetEntries(114);
   h2_copy->SetStats(0);
   h2_copy->SetFillColor(2);
   h2_copy->SetLineWidth(2);
   h2_copy->SetMarkerStyle(20);
   h2_copy->GetXaxis()->SetNdivisions(505);
   h2_copy->GetXaxis()->SetLabelFont(42);
   h2_copy->GetXaxis()->SetLabelSize(0.07);
   h2_copy->GetXaxis()->SetTitleSize(0.07);
   h2_copy->GetXaxis()->SetTitleOffset(1.1);
   h2_copy->GetXaxis()->SetTitleFont(42);
   h2_copy->GetYaxis()->SetNdivisions(505);
   h2_copy->GetYaxis()->SetLabelFont(42);
   h2_copy->GetYaxis()->SetLabelSize(0.07);
   h2_copy->GetYaxis()->SetTitleSize(0.07);
   h2_copy->GetYaxis()->SetTitleOffset(1.3);
   h2_copy->GetYaxis()->SetTitleFont(42);
   h2_copy->GetZaxis()->SetLabelFont(42);
   h2_copy->GetZaxis()->SetLabelSize(0.035);
   h2_copy->GetZaxis()->SetTitleSize(0.035);
   h2_copy->GetZaxis()->SetTitleFont(42);
   h2_copy->Draw("sameE");
   Double_t xAxis8[5] = {100, 150, 200, 250, 300}; 
   
   TH1D *MT2_susy = new TH1D("MT2_susy","",4, xAxis8);
   MT2_susy->SetBinContent(2,0.6868009);
   MT2_susy->SetBinContent(3,2.489492);
   MT2_susy->SetBinContent(4,3.597845);
   MT2_susy->SetBinError(2,0.1304177);
   MT2_susy->SetBinError(3,0.2751065);
   MT2_susy->SetBinError(4,0.358849);
   MT2_susy->SetBinError(5,0.1757565);
   MT2_susy->SetEntries(419);
   MT2_susy->SetStats(0);
   MT2_susy->SetLineStyle(3);
   MT2_susy->SetLineWidth(3);
   MT2_susy->GetXaxis()->SetNdivisions(505);
   MT2_susy->GetXaxis()->SetLabelFont(42);
   MT2_susy->GetXaxis()->SetLabelSize(0.07);
   MT2_susy->GetXaxis()->SetTitleSize(0.07);
   MT2_susy->GetXaxis()->SetTitleOffset(1.1);
   MT2_susy->GetXaxis()->SetTitleFont(42);
   MT2_susy->GetYaxis()->SetNdivisions(505);
   MT2_susy->GetYaxis()->SetLabelFont(42);
   MT2_susy->GetYaxis()->SetLabelSize(0.07);
   MT2_susy->GetYaxis()->SetTitleSize(0.07);
   MT2_susy->GetYaxis()->SetTitleOffset(1.3);
   MT2_susy->GetYaxis()->SetTitleFont(42);
   MT2_susy->GetZaxis()->SetLabelFont(42);
   MT2_susy->GetZaxis()->SetLabelSize(0.035);
   MT2_susy->GetZaxis()->SetTitleSize(0.035);
   MT2_susy->GetZaxis()->SetTitleFont(42);
   MT2_susy->Draw("samehist");


//   cout<<"MT2"<< MT2->GetBinContent(4)<<endl;

 //  TH1D *h__MC = h__MC2->Rebin(nBins,"h__MC",xbin);
   h__MC2->Add(MT2_QCD);
   h__MC2->Add(MT2_W);
   h__MC2->Add(MT2_ZX);
   h__MC2->Add(MT2_Top);
   h__MC2->Add(MT2_WW);
   h__MC2->Add(MT2_Higgs);
   cout<<"h__MC2"<< h__MC2->GetBinContent(4)<<endl;

   h__MC2->SetLineColor(kWhite);
   h__MC2->SetFillColor(kBlack);
   h__MC2->SetFillStyle(3004);
   h__MC2->Draw("SAME E2");


   TLegend *leg = new TLegend(0.66,0.60,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry ;
   entry=leg->AddEntry(h2_copy,"data","lp");
   entry=leg->AddEntry(MT2_QCD,"QCD multijet","f");
   entry=leg->AddEntry(MT2_W,"W","f");
   entry=leg->AddEntry(MT2_ZX,"ZX","f");
   entry=leg->AddEntry(MT2_Top,"Top","f");
   entry=leg->AddEntry(MT2_WW,"WW","f");
   entry=leg->AddEntry(MT2_Higgs,"Higgs","f");
   entry=leg->AddEntry(h__MC2 , "Uncertainties" , "f" );
   entry=leg->AddEntry(MT2_susy,"SUSY(240,40)","f");
   leg->Draw();

   TLatex* tex = new TLatex(0.68,0.943,"#sqrt{s} = 8 TeV, L = 18.1 fb^{-1}");
   tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.20,0.85,"CMS Preliminary");
   tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.22,0.80,"#tau_{h}#tau_{h}");
   tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.1,0.943,"Preselection, MT2<90, b-tagged jets vetoed");
   tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
}

void plot2(){  
// ------------>Primitives in pad: MT2_ratio_plotpad_3
   MT2_ratio_plotpad_3 = new TPad("MT2_ratio_plotpad_3", "newpad",0.5604027,0.7562863,0.6107383,0.8143133);
   MT2_ratio_plotpad_3->Draw();
   MT2_ratio_plotpad_3->cd();
   MT2_ratio_plotpad_3->Range(0,0,1,1);
   MT2_ratio_plotpad_3->SetFillColor(0);
   MT2_ratio_plotpad_3->SetBorderMode(0);
   MT2_ratio_plotpad_3->SetBorderSize(2);
   MT2_ratio_plotpad_3->SetLeftMargin(0.18);
   MT2_ratio_plotpad_3->SetRightMargin(0.08);
   MT2_ratio_plotpad_3->SetTopMargin(0.07);
   MT2_ratio_plotpad_3->SetBottomMargin(0.17);
   MT2_ratio_plotpad_3->SetFrameLineWidth(3);
   MT2_ratio_plotpad_3->SetFrameBorderMode(0);
   MT2_ratio_plotpad_3->SetFrameBorderSize(0);
   MT2_ratio_plotpad_3->Modified();
   MT2_ratio_plotpad->cd();

   MT2_ratio_plotpad->Modified();
   MT2_ratioc_ratio->cd();
  
// ------------>Primitives in pad: MT2_ratio_ratiopad
   MT2_ratio_ratiopad = new TPad("MT2_ratio_ratiopad", "Pad containing the ratio",0,0.01863354,0.9967105,0.2189441);
   MT2_ratio_ratiopad->Draw();
   MT2_ratio_ratiopad->cd();
   MT2_ratio_ratiopad->Range(66.21832,-0.8571431,318.9553,2.214286);
   MT2_ratio_ratiopad->SetFillColor(0);
   MT2_ratio_ratiopad->SetBorderMode(0);
   MT2_ratio_ratiopad->SetBorderSize(2);
   MT2_ratio_ratiopad->SetLeftMargin(0.1336634);
   MT2_ratio_ratiopad->SetRightMargin(0.075);
   MT2_ratio_ratiopad->SetTopMargin(0.06976745);
   MT2_ratio_ratiopad->SetBottomMargin(0.2790698);
   MT2_ratio_ratiopad->SetFrameLineWidth(3);
   MT2_ratio_ratiopad->SetFrameBorderMode(0);
   MT2_ratio_ratiopad->SetFrameBorderSize(0);
   MT2_ratio_ratiopad->SetFrameLineWidth(3);
   MT2_ratio_ratiopad->SetFrameBorderMode(0);
   MT2_ratio_ratiopad->SetFrameBorderSize(0);
   Double_t xAxis9[5] = {100, 150, 200, 250, 300}; 
   
   TH1F *h1_copy  = (TH1F*)h__MC2->Clone();
   h1_copy->Divide(h1_copy);


  // TH1D *h1_copy = new TH1D("h1_copy","",4, xAxis9);
/*  h1_copy->SetBinContent(1,1);
   h1_copy->SetBinContent(2,1);
   h1_copy->SetBinContent(3,1);
   h1_copy->SetBinContent(4,1);
   h1_copy->SetBinError(1,0.4554153);
   h1_copy->SetBinError(2,0.232837);
   h1_copy->SetBinError(3,0.387561);
   h1_copy->SetBinError(4,0.5494205);*/
   h1_copy->SetMinimum(0);
   h1_copy->SetMaximum(2);
   h1_copy->SetEntries(22.41893);
   h1_copy->SetStats(0);
   h1_copy->SetFillColor(1);
   h1_copy->SetFillStyle(3004);

   ci = TColor::GetColor("#cccc00");
   h1_copy->SetLineColor(ci);
   h1_copy->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   h1_copy->SetMarkerColor(ci);
   h1_copy->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
   h1_copy->GetXaxis()->SetNdivisions(505);
   h1_copy->GetXaxis()->SetLabelFont(42);
   h1_copy->GetXaxis()->SetLabelSize(0);
   h1_copy->GetXaxis()->SetTitleSize(0.2);
   h1_copy->GetXaxis()->SetTickLength(0.09);
   h1_copy->GetXaxis()->SetTitleOffset(0.5);
   h1_copy->GetXaxis()->SetTitleFont(42);
   h1_copy->GetYaxis()->SetTitle("Data / MC");
   h1_copy->GetYaxis()->SetNdivisions(509);
   h1_copy->GetYaxis()->SetLabelFont(42);
   h1_copy->GetYaxis()->SetLabelSize(0.19);
   h1_copy->GetYaxis()->SetTitleSize(0.18);
   h1_copy->GetYaxis()->SetTitleOffset(0.36);
   h1_copy->GetYaxis()->SetTitleFont(42);
   h1_copy->GetZaxis()->SetLabelFont(42);
   h1_copy->GetZaxis()->SetLabelSize(0.035);
   h1_copy->GetZaxis()->SetTitleSize(0.035);
   h1_copy->GetZaxis()->SetTitleFont(42);
   h1_copy->Draw("E2");
   Double_t xAxis10[5] = {100, 150, 200, 250, 300}; 
   
  
   TH1F *h2_copy__2  = (TH1F*)h2_copy->Clone();
   h2_copy__2->Divide(h__MC2);
   h2_copy__2->SetMinimum(0.4);
   h2_copy__2->SetMaximum(3);
   h2_copy__2->SetEntries(2.397098);
   h2_copy__2->SetDirectory(0);
   h2_copy__2->SetStats(0);
   h2_copy__2->SetLineWidth(2);
   h2_copy__2->SetMarkerStyle(20);
   h2_copy__2->GetXaxis()->SetNdivisions(505);
   h2_copy__2->GetXaxis()->SetLabelFont(42);
   h2_copy__2->GetXaxis()->SetLabelSize(0.07);
   h2_copy__2->GetXaxis()->SetTitleSize(0.07);
   h2_copy__2->GetXaxis()->SetTitleOffset(1.1);
   h2_copy__2->GetXaxis()->SetTitleFont(42);
   h2_copy__2->GetYaxis()->SetNdivisions(505);
   h2_copy__2->GetYaxis()->SetLabelFont(42);
   h2_copy__2->GetYaxis()->SetLabelSize(0.07);
   h2_copy__2->GetYaxis()->SetTitleSize(0.07);
   h2_copy__2->GetYaxis()->SetTitleOffset(1.3);
   h2_copy__2->GetYaxis()->SetTitleFont(42);
   h2_copy__2->GetZaxis()->SetLabelFont(42);
   h2_copy__2->GetZaxis()->SetLabelSize(0.035);
   h2_copy__2->GetZaxis()->SetTitleSize(0.035);
   h2_copy__2->GetZaxis()->SetTitleFont(42);
   h2_copy__2->Draw("Esame");
   TLine *line = new TLine(100,1,300,1);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();












 //  TLine *line = new TLine(100,1,300,1);
 //   line->SetLineStyle(7);
 //   line->SetLineWidth(2);
 //   line->Draw();
   Double_t xAxis11[5] = {100, 150, 200, 250, 300}; 
   
 /*  TH1D *h1_copy__3__3__3__3 = new TH1D("h1_copy__3__3__3__3","",4, xAxis11);
   h1_copy__3__3__3__3->SetBinContent(1,1);
   h1_copy__3__3__3__3->SetBinContent(2,1);
   h1_copy__3__3__3__3->SetBinContent(3,1);
   h1_copy__3__3__3__3->SetBinContent(4,1);
   h1_copy__3__3__3__3->SetBinError(1,0.4554153);
   h1_copy__3__3__3__3->SetBinError(2,0.232837);
   h1_copy__3__3__3__3->SetBinError(3,0.387561);
   h1_copy__3__3__3__3->SetBinError(4,0.5494205);
   h1_copy__3__3__3__3->SetMinimum(0);
   h1_copy__3__3__3__3->SetMaximum(2);
   h1_copy__3__3__3__3->SetEntries(22.41893);
   h1_copy__3__3__3__3->SetDirectory(0);
   h1_copy__3__3__3__3->SetStats(0);
   h1_copy__3__3__3__3->SetFillColor(1);
   h1_copy__3__3__3__3->SetFillStyle(3004);
   h1_copy__3__3__3__3->SetLineColor(2);
   h1_copy__3__3__3__3->SetLineWidth(2);
   h1_copy__3__3__3__3->SetMarkerColor(2);
   h1_copy__3__3__3__3->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
   h1_copy__3__3__3__3->GetXaxis()->SetNdivisions(505);
   h1_copy__3__3__3__3->GetXaxis()->SetLabelFont(42);
   h1_copy__3__3__3__3->GetXaxis()->SetLabelSize(0);
   h1_copy__3__3__3__3->GetXaxis()->SetTitleSize(0.2);
   h1_copy__3__3__3__3->GetXaxis()->SetTickLength(0.09);
   h1_copy__3__3__3__3->GetXaxis()->SetTitleOffset(0.5);
   h1_copy__3__3__3__3->GetXaxis()->SetTitleFont(42);
   h1_copy__3__3__3__3->GetYaxis()->SetTitle("Data / MC");
   h1_copy__3__3__3__3->GetYaxis()->SetNdivisions(509);
   h1_copy__3__3__3__3->GetYaxis()->SetLabelFont(42);
   h1_copy__3__3__3__3->GetYaxis()->SetLabelSize(0.19);
   h1_copy__3__3__3__3->GetYaxis()->SetTitleSize(0.18);
   h1_copy__3__3__3__3->GetYaxis()->SetTitleOffset(0.36);
   h1_copy__3__3__3__3->GetYaxis()->SetTitleFont(42);
   h1_copy__3__3__3__3->GetZaxis()->SetLabelFont(42);
   h1_copy__3__3__3__3->GetZaxis()->SetLabelSize(0.035);
   h1_copy__3__3__3__3->GetZaxis()->SetTitleSize(0.035);
   h1_copy__3__3__3__3->GetZaxis()->SetTitleFont(42);
   h1_copy__3__3__3__3->Draw("sameaxis");*/
   MT2_ratio_ratiopad->Modified();
   MT2_ratioc_ratio->cd();
   MT2_ratioc_ratio->Modified();
   MT2_ratioc_ratio->cd();
   MT2_ratioc_ratio->SetSelected(MT2_ratioc_ratio);
   MT2_ratioc_ratio->ToggleToolBar();
}
