{
  gROOT->Reset();   // reset global variables

  gROOT->SetStyle("Plain");
  
  bool withATLAS = false;
  withATLAS = false;
   // For the canvas:
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(kWhite);
  gStyle->SetCanvasDefH(600); //Height of canvas
  gStyle->SetCanvasDefW(600); //Width of canvas
  gStyle->SetCanvasDefX(0);   //POsition on screen
  gStyle->SetCanvasDefY(0);

// For the Pad:
  gStyle->SetPadBorderMode(0);
  gStyle->SetPadColor(kWhite);
  gStyle->SetPadGridX(false);
  gStyle->SetPadGridY(false);
  gStyle->SetGridColor(0);
  gStyle->SetGridStyle(3);
  gStyle->SetGridWidth(1);

// For the frame:
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameBorderSize(0);
  gStyle->SetFrameFillColor(0);
  gStyle->SetFrameFillStyle(0);
  gStyle->SetFrameLineColor(1);
  gStyle->SetFrameLineStyle(1);
  gStyle->SetFrameLineWidth(3);

// For the histo:
  gStyle->SetHistLineColor(1);
  gStyle->SetHistLineStyle(0);
  gStyle->SetHistLineWidth(1);

  gStyle->SetEndErrorSize(2);
  //gStyle->SetErrorMarker(20);
  gStyle->SetErrorX(0.);

  //gStyle->SetMarkerStyle(20);

//For the fit/function:
  gStyle->SetOptFit(1);
  gStyle->SetFitFormat("5.4g");
  gStyle->SetFuncColor(2);
  gStyle->SetFuncStyle(1);
  gStyle->SetFuncWidth(1);

//For the date:
  gStyle->SetOptDate(0);

// For the statistics box:
  gStyle->SetOptFile(0);
  gStyle->SetOptStat(0); // To display the mean and RMS:   SetOptStat("mr");
  gStyle->SetStatColor(kWhite);
  gStyle->SetStatFont(42);
  gStyle->SetStatFontSize(0.025);
  gStyle->SetStatTextColor(1);
  gStyle->SetStatFormat("6.4g");
  gStyle->SetStatBorderSize(1);
  gStyle->SetStatH(0.1);
  gStyle->SetStatW(0.15);


// Margins:
  gStyle->SetPadTopMargin(0.07);
  gStyle->SetPadLeftMargin(0.15);
  gStyle->SetPadRightMargin(0.05);
  gStyle->SetPadBottomMargin(0.18);

// For the Global title:

  gStyle->SetTitleFont(42);
  gStyle->SetTitleColor(1);
  gStyle->SetTitleTextColor(1);
  gStyle->SetTitleFillColor(10);
  gStyle->SetTitleFontSize(0.04);
  // gStyle->SetTitleH(0); // Set the height of the title box
  // gStyle->SetTitleW(0); // Set the width of the title box
   gStyle->SetTitleX(0.15); // Set the position of the title box
   gStyle->SetTitleY(0.991); // Set the position of the title box
  // gStyle->SetTitleStyle(Style_t style = 1001);
  gStyle->SetTitleBorderSize(0);

// For the axis titles:

  gStyle->SetTitleColor(1, "XYZ");
  gStyle->SetTitleFont(42, "XYZ");
  gStyle->SetTitleSize(0.06, "XYZ");
  //gStyle->SetTitleSize(0.06, "XYZ");
  // gStyle->SetTitleXSize(Float_t size = 0.02); // Another way to set the size?
  // gStyle->SetTitleYSize(Float_t size = 0.02);
  //gStyle->SetTitleXOffset(0.9);
  gStyle->SetTitleXOffset(1.3);
  //gStyle->SetTitleYOffset(1.25);
  gStyle->SetTitleYOffset(1.25);
  // gStyle->SetTitleOffset(1.1, "Y"); // Another way to set the Offset

// For the axis labels:

  gStyle->SetLabelColor(1, "XYZ");
  gStyle->SetLabelFont(42, "XYZ");
  gStyle->SetLabelOffset(0.007, "XYZ");
  gStyle->SetLabelSize(0.065, "XYZ");
 // gStyle->SetLabelSize(0.05, "XYZ");
// For the axis:

  gStyle->SetAxisColor(1, "XYZ");
  gStyle->SetStripDecimals(1);
  gStyle->SetTickLength(0.03, "XYZ");
  gStyle->SetNdivisions(507, "XYZ");
  gStyle->SetPadTickX(1);  // To get tick marks on the opposite side of the frame
  gStyle->SetPadTickY(1);

// Change for log plots:
  gStyle->SetOptLogx(0);
  gStyle->SetOptLogy(0);
  gStyle->SetOptLogz(0);
  
  gStyle->SetPalette(1);
//  TGaxis::SetMaxDigits(3);

  TCanvas* c=new TCanvas("c","sigle top",200,120,700,500);

  pad2 = new TPad("pad2","pad2",0.03,0.02,0.98,0.98,32);
  pad2->Draw();
  pad2->cd();
  pad2->SetLogy();
  pad2->SetFillColor(0);


/// experimental data:

  const Int_t n = 4;  
  Float_t x1[n], y1[n], exl1[n], exh1[n], eyl1[n], eyh1[n];
  Float_t x2[n], y2[n], exl2[n], exh2[n], eyl2[n], eyh2[n];
  Float_t x3[n], y3[n], exl3[n], exh3[n], eyl3[n], eyh3[n];
  Float_t x4[n], y4[n], exl4[n], exh4[n], eyl4[n], eyh4[n];
  Float_t x5[n], y5[n], exl5[n], exh5[n], eyl5[n], eyh5[n];

  ifstream data;       // declare a file to input from
  data.open("finalplot.data"); 
    Int_t i = 0;  
    data>>x1[i]>>y1[i]>>eyh1[i]>>eyl1[i];
    data>>x2[i]>>y2[i]>>eyh2[i]>>eyl2[i];
    data>>x3[i]>>y3[i]>>eyh3[i]>>eyl3[i];
    data>>x4[i]>>y4[i]>>eyh4[i]>>eyl4[i];
    data>>x5[i]>>y5[i]>>eyh5[i]>>eyl5[i];
//  for(Int_t i=0;i<n;i++){
//  }    
  data.close();


  TGraphAsymmErrors* d0 = new TGraphAsymmErrors(1, x1, y1, exl1, exh1, eyl1, eyh1); 
  d0->UseCurrentStyle();
  d0->SetTitle("t-channel single top quark production");
  d0->GetXaxis()->SetTitle("#sqrt{s} [TeV]");
  d0->SetMinimum(0.3);
  d0->SetMaximum(400);
  d0->GetYaxis()->SetTitle("\\sigma [pb]");
  d0->SetMarkerColor(1);
  d0->SetMarkerSize(1.);
  d0->SetMarkerStyle(23);
  d0->SetLineWidth(2);
  d0->GetXaxis()->SetLimits(0,10);
  d0->Draw("AP");

  TGraphAsymmErrors* cdf = new TGraphAsymmErrors(1, x3, y3, exl3, exh3, eyl3, eyh3); 
  cdf->UseCurrentStyle();
  cdf->SetMarkerColor(1);
  cdf->SetMarkerStyle(22);
  cdf->SetMarkerSize(1.);
  cdf->SetLineWidth(2);
  cdf->Draw("P");
  
  TGraphAsymmErrors* atlas = new TGraphAsymmErrors(1, x2, y2, exl2, exh2, eyl2, eyh2); 
  atlas->UseCurrentStyle();
  atlas->SetMarkerColor(4);
  atlas->SetMarkerStyle(21);
  atlas->SetMarkerSize(1.);
  atlas->SetLineWidth(2);
  if (withATLAS) atlas->Draw("P");

  TGraphAsymmErrors* cms = new TGraphAsymmErrors(1, x4, y4, exl4, exh4, eyl4, eyh4); 
  cms->UseCurrentStyle();
  cms->SetMarkerColor(2);
  cms->SetMarkerStyle(20);
  cms->SetMarkerSize(1.);
  cms->SetLineWidth(2);
  cms->Draw("P");

  TGraphAsymmErrors* cms8TeV = new TGraphAsymmErrors(1, x5, y5, exl5, exh5, eyl5, eyh5); 
  cms8TeV->UseCurrentStyle();
  cms8TeV->SetMarkerColor(2);
  cms8TeV->SetMarkerStyle(21);
  cms8TeV->SetMarkerSize(1.);
  cms8TeV->SetLineWidth(2);
  cms8TeV->Draw("P");

/// theory, NLO:

   Float_t ecm[18] =   {1.96, 2.0,  2.5,  3.0,  3.5,  4.0,  4.5,  5.0,  5.5,  6.0,  6.5,  7.0,  7.5,  8.0,  8.5,  9.0,   9.5,   10.0};
   Float_t ecmerr[18]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   //   Float_t nlo[18] = {1.95, 2.09,4.37,7.57,11.69,16.69,22.51,29.10,36.45,44.47,53.11,62.53,72.51,82.82,93.82,105.36,117.44,129.51};
   Float_t nlo[18] = {1.95, 2.09, 4.37, 7.57, 11.69,16.69,22.50,29.12,36.42,44.45,53.19,62.48,72.39,82.81,93.92,105.22,117.24,129.46};
   Float_t nlomtup[18]= {0.03, 0.05, 0.07, 0.12, 0.20, 0.22, 0.32, 0.38 ,0.41, 0.58, 0.63, 0.63, 0.70, 0.89, 1.04, 1.07,  1.02,  1.44};
   Float_t nlomtdw[18]= {0.04, 0.04, 0.07, 0.11, 0.17, 0.22, 0.29, 0.34 ,0.42, 0.53, 0.46, 0.75, 1.01, 0.90, 1.02, 1.10,  1.39,  1.17};
   Float_t nloscup[18]= {0.10, 0.11, 0.21, 0.37, 0.55, 0.78, 1.05, 1.34, 1.66, 2.06, 2.58, 2.73, 3.20, 3.64, 4.30, 4.91,  5.17,  6.27};
   Float_t nloscdw[18]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   Float_t nlopdfup[18] = {0.24, 0.25, 0.36, 0.48, 0.58, 0.68, 0.78, 0.87, 0.98, 1.09, 1.21, 1.34, 1.49, 1.64, 1.80, 1.98,  2.16,  2.63};
   Float_t nlopdfdw[18] = {0.17, 0.18, 0.28, 0.39, 0.50, 0.62, 0.75, 0.88, 1.03, 1.18, 1.36, 1.55, 1.76, 1.98, 2.23, 2.51,  2.80,  3.12};

   Float_t nloup[18];
   Float_t nlodown[18];
   Float_t nlocentral[18];
   Float_t nloerror[18];
   for (int i=0; i<18; i++) {
     /*
     nloup[i]=nlo[i]+sqrt(nlomtup[i]*nlomtup[i] + nloscup[i]*nloscup[i] + nlopdfup[i]*nlopdfup[i]);
     nlodown[i]=nlo[i]-sqrt(nlomtdw[i]*nlomtdw[i] + nloscdw[i]*nloscdw[i] + nlopdfdw[i]*nlopdfdw[i]);
     */
     nloup[i]=nlo[i]+sqrt(nloscup[i]*nloscup[i] + nlopdfup[i]*nlopdfup[i]);
     nlodown[i]=nlo[i]-sqrt(nloscdw[i]*nloscdw[i] + nlopdfdw[i]*nlopdfdw[i]);
     nlocentral[i]=(nloup[i]+nlodown[i])/2.;
     nloerror[i]=nloup[i]-nlocentral[i];
   }

   TGraphErrors *thnlo1 = new TGraphErrors(18,ecm,nlocentral,ecmerr,nloerror);
   thnlo1->SetFillColor(6);
   thnlo1->SetLineColor(6);
   thnlo1->Draw("E3");

   TGraph *thnlo2 = new TGraph(18,ecm,nlo);
   thnlo2->SetLineStyle(2);
   thnlo2->SetLineColor(1);
   thnlo2->SetLineWidth(1);
   thnlo2->Draw("");

/// theory, NLO+NNLL:
   Float_t nnll[18] = {0.2084E+01,0.2247E+01,0.4738E+01,0.8220E+01,0.1270E+02,0.1806E+02,0.2433E+02,0.3133E+02,0.3912E+02,0.4718E+02,0.5550E+02,0.6429E+02,0.7488E+02,0.8592E+02,0.9685E+02,0.1083E+03,0.1200E+03,0.1323E+03};
   Float_t nnllup[18] = {0.2209E+01,0.2382E+01,0.4975E+01,0.8582E+01,0.1324E+02,0.1880E+02,0.2530E+02,0.3258E+02,0.4068E+02,0.4907E+02,0.5772E+02,0.6686E+02,0.7880E+02,0.8918E+02,0.1005E+03,0.1123E+03,0.1244E+03,0.1371E+03};
   Float_t nnlldown[18] = {0.1955E+01,0.2108E+01,0.4482E+01,0.7842E+01,0.1218E+02,0.1739E+02,0.2348E+02,0.3030E+02,0.3789E+02,0.4576E+02,0.5384E+02,0.6243E+02,0.7275E+02,0.8351E+02,0.9414E+02,0.1054E+03,0.1168E+03,0.1287E+03};

   Float_t nnllcentral[18];
   Float_t nnllerror[18];
   for (int i=0; i<18; i++) {
     nnllcentral[i]=(nnllup[i]+nnlldown[i])/2.;
     nnllerror[i]=nnllup[i]-nnllcentral[i];
   }

   TGraphErrors *thnnll1 = new TGraphErrors(18,ecm,nnllcentral,ecmerr,nnllerror);
   thnnll1->SetFillColor(8);
   thnnll1->SetLineColor(8);
   thnnll1->Draw("E3");

   TGraph *thnnll2 = new TGraph(18,ecm,nnll);
   thnnll2->SetLineStyle(1);
   thnnll2->SetLineColor(1);
   thnnll2->SetLineWidth(1);
   thnnll2->Draw("");

/// Draw experimental points on top of theory:

  cms->Draw("P");
  cms8TeV->Draw("P");
  if (withATLAS) atlas->Draw("P");


   //dirty trick to have a thick line in the legend:
   TLine *line1 = new TLine();
   line1->SetLineColor(6);
   line1->SetLineWidth(5);
   TLine *line2 = new TLine();
   line2->SetLineColor(8);
   line2->SetLineWidth(5);

/// legend:

  TLegend* leg = new TLegend(0.2, 0.7, 0.6, 0.9);
  leg->SetTextSize(0.03);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);
  leg->SetFillColor(10);
  leg->AddEntry(cms8TeV, "CMS preliminary, 19.4 fb^{-1}", "p");
  leg->AddEntry(cms, "CMS, 1.17/1.56 fb^{-1}", "p");
  if (withATLAS) leg->AddEntry(atlas, "ATLAS, 1.04 fb^{-1}", "p");
  leg->AddEntry(d0, "D0, 5.4 fb^{-1}", "p");
  leg->AddEntry(cdf, "CDF, 7.5 fb^{-1}", "p");
  leg->SetFillStyle(0);
  leg->SetBorderSize(0);
  leg->SetBorderSize(0);
  leg->Draw();

  // legend for theory
  TLegend* leg3 = new TLegend(0.45,0.45,0.85,0.55);
  leg3->SetTextSize(0.03);
  leg3->SetTextFont(42);
  leg3->SetBorderSize(0);
  leg3->SetFillColor(10);
  leg3->AddEntry(thnlo2,"NLO QCD (5 flavour scheme)","L");
  leg3->AddEntry(line1, "theory uncertainty (scale #oplus PDF)","l");
  leg3->Draw(); 
  TLatex* t3 = new TLatex(.465,0.42,"Campbell, Frederix, Maltoni, Tramontano, JHEP 10 (2009) 042");
  t3->SetNDC(kTRUE);
  t3->SetTextFont(42);
  t3->SetTextSize(.025);
  t3->Draw();

  TLegend* leg2 = new TLegend(0.45,0.25,0.85,0.35);
  leg2->SetTextSize(0.03);
  leg2->SetTextFont(42);
  leg2->SetBorderSize(0);
  leg2->SetFillColor(10);
  leg2->AddEntry(thnnll2,"NLO+NNLL QCD","L");
  leg2->AddEntry(line2, "theory uncertainty (scale #oplus PDF)","l");
  leg2->Draw(); 
  //  TLatex* t2 = new TLatex(.465,0.22,"Kidonakis, arXiv:1103.2792v1 [hep-ph]");
  TLatex* t2 = new TLatex(.465,0.22,"Kidonakis, Phys.Rev.D 83 (2011) 091503");
  t2->SetNDC(kTRUE);
  t2->SetTextFont(42);
  t2->SetTextSize(.025);
  t2->Draw();



c->Update();
// if (withATLAS) {
   c->SaveAs("finalplot.gif");
   c->SaveAs("finalplot.eps");
   c->SaveAs("finalplot.png");
   c->SaveAs("finalplot.pdf");
   /*
 } else {
   c->SaveAs("finalplot_noATLAS.gif");
   c->SaveAs("finalplot_noATLAS.eps");
   c->SaveAs("finalplot_noATLAS.png");
   c->SaveAs("finalplot_noATLAS.pdf");
 }
   */

}
